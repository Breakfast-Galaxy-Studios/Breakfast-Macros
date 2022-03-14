#include "InterceptionHandler.h"
#include <qobject.h>
#include <qmetaobject.h>
#include <tchar.h>
#include <strsafe.h>

#include "InterceptionHandler.h"
#include "intercept.h"
#include "intutils.h"
#include "Utils.h"
#include "FileManager.h"
#include "MacroApp.h"
#include "DeviceUI.h"
#include "Converter.h"
#include "ActionHandler.h"

extern size_t deviceID;
extern MacroManager macroManager;
extern FileManager fileManager;
extern MacroApp* app;
extern "C" HANDLE wait_handles[INTERCEPTION_MAX_DEVICE];
extern bool typeNonMacroKeys;
extern int keyToAppend;

DWORD interceptionThreadID;
HANDLE interceptionHandle;
InterceptionContext context;
InterceptionState state;

bool operator==(const InterceptionKeyStroke& first, const InterceptionKeyStroke& second) {
	return first.code == second.code && first.state == second.state;
}
bool operator!=(const InterceptionKeyStroke& first, const InterceptionKeyStroke& second) {
	return first.code != second.code || first.state != second.state;
}

typedef struct ThreadArgs {
	int emptyvalorsomethingidk;
} THREADARGS, * PTHREADARGS;

void setupInterception() {
	setInterceptionState(InterceptionState::INTERCEPTING);
	raise_process_priority();
	context = interception_create_context();

	interceptionThreadID++;
	PTHREADARGS a;
	interceptionHandle = CreateThread(NULL, 0, thread_interception, a, 0, &interceptionThreadID);

	Logger::print("Interception has been set up.", "");
}

void cleanupInterception() {
	try {
		if (interceptionHandle) CloseHandle(interceptionHandle);
		for (int i = 0; i < INTERCEPTION_MAX_DEVICE; i++) {
			if (wait_handles[i]) TerminateThread(wait_handles[i], 0);
		}
	}
	catch (std::exception ex) {}
	interception_destroy_context(context);
	do {} while (interceptionHandle);
	Logger::print("Interception has been cleaned up.", "");
}

void setInterceptionState(InterceptionState newState) {
	if (state != newState) {
		state = newState;
		try {
			if (interceptionHandle) CloseHandle(interceptionHandle);
			for (int i = 0; i < INTERCEPTION_MAX_DEVICE; i++) {
				if (wait_handles[i]) TerminateThread(wait_handles[i], 0);
			}
		}
		catch (std::exception ex) {}
		interceptionThreadID++;
		PTHREADARGS args;

		do {} while (interceptionHandle);
		interceptionHandle = CreateThread(NULL, 0, thread_interception, args, 0, &interceptionThreadID);
	}
}

bool isRegistering() {
	return state == InterceptionState::REGISTERINGDEV;
}

bool isIntercepting() {
	return state == InterceptionState::INTERCEPTING;
}

bool isStopped() {
	return state == InterceptionState::STOPPED;
}

DWORD WINAPI thread_interception(LPVOID lpParam) {
	InterceptionDevice device;
	InterceptionKeyStroke stroke;
	wchar_t hardware_id[500];
	interception_set_filter(context, interception_is_keyboard, INTERCEPTION_FILTER_KEY_DOWN | INTERCEPTION_FILTER_KEY_E0);
	if (state == InterceptionState::INTERCEPTING) {
		Logger::print("Interception state is INTERCEPTING.", "");
		while (interception_receive(context, device = interception_wait(context), (InterceptionStroke*)&stroke, 1) > 0) {
			size_t pressedDeviceID = interception_get_hardware_id(context, device, hardware_id, sizeof(hardware_id));
			if (deviceID == pressedDeviceID) {
				if (stroke.code == 69) {
					interception_send(context, device, (InterceptionStroke*)&stroke, 1);
					continue;
				}
				bool hasMacro = false;
				for (Macro* macro : macroManager.getMacros()) {
					if (macro != nullptr && macro->isEnabled() && Converter::rawCodeToVirtual(stroke) == macro->getRequiredKey()) {
						for (auto action : macro->getActions()) if (action != nullptr) action->run();
						hasMacro = true;
					}
				}
				if (!hasMacro && typeNonMacroKeys) {
					ActionHandler::sendFakeKeys({ Converter::rawCodeToVirtual(stroke), keyToAppend }, true);
				}
			}
			else {
				interception_send(context, device, (InterceptionStroke*)&stroke, 1);
			}
		}
		state = InterceptionState::STOPPED;
		return 0;
	}

	else if (state == InterceptionState::REGISTERINGDEV) {
		Logger::print("Interception state is REGISTERING.", "");
		app->getDeviceUI()->show();
		size_t newDeviceID = 0;
		while (interception_receive(context, device = interception_wait(context), (InterceptionStroke*)&stroke, 1) > 0) {
			newDeviceID = interception_get_hardware_id(context, device, hardware_id, sizeof(hardware_id));
			Logger::print("interception-devID: ", newDeviceID);
			break;
		}
		Logger::print("New device id: ", newDeviceID);
		if(newDeviceID != 0)
		deviceID = newDeviceID;

		app->getSettingsUI()->updateGUI();
		QMetaObject::invokeMethod(app->getDeviceUI(), "hide", Qt::QueuedConnection);
		fileManager.updateConfig();
		setInterceptionState(InterceptionState::INTERCEPTING);
		return 1;
	}

	Logger::print("Interception state is STOPPED.", "");
}
