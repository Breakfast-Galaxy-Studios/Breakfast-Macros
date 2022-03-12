#include "Settings.h"
#include "MacroApp.h"
#include "FileManager.h"
#include "InterceptionHandler.h"
#include "DeviceUI.h"
#include "Utils.h"

extern size_t deviceID;
extern bool openOnStartup;
extern bool darkMode;
extern bool minimizeToTray;
extern bool minimizeOnStart;
extern bool debugMode;
extern std::string APP_VERSION;
extern MacroApp* app;
extern FileManager fileManager;
extern bool typeNonMacroKeys;
extern int keyToAppend;

SettingsUI::SettingsUI(QWidget *parent)
	: QWidget(parent){
	ui.setupUi(this);
	this->setFixedSize(this->size());

	updateGUI();

	connect(ui.darkModeBox, SIGNAL(clicked(bool)), this, SLOT(darkModeAction(bool)));
	connect(ui.minimizeOnStartBox, SIGNAL(clicked(bool)), this, SLOT(openToTrayAction(bool)));
	connect(ui.minimizeToTrayBox, SIGNAL(clicked(bool)), this, SLOT(minimizeToTrayAction(bool)));
	connect(ui.openOnStartupBox, SIGNAL(clicked(bool)), this, SLOT(openOnStartupAction(bool)));
	connect(ui.debugModeBox, SIGNAL(clicked(bool)), this, SLOT(debugModeAction(bool)));
	connect(ui.typeNonMacroKeys, SIGNAL(clicked(bool)), this, SLOT(typeNonMacroKeysAction(bool)));
	connect(ui.registerDeviceButton, SIGNAL(clicked()), this, SLOT(registerDevAction()));
	connect(ui.resetDeviceIDButton, SIGNAL(clicked()), this, SLOT(resetDeviceIDAction()));
	connect(ui.clearAppendedKeyButton, SIGNAL(clicked()), this, SLOT(clearAppendedKey()));
	connect(ui.changeAppendedKeyButton, SIGNAL(clicked()), this, SLOT(registerKeyAction()));
}

void SettingsUI::updateGUI() {
	std::string tmp_str = "Current Device Id: ";
	if (deviceID != 0) {
		tmp_str += std::to_string(deviceID);
	} else {
		tmp_str += "N/A";
	}
	ui.currentID->setText(QString::fromStdString(tmp_str));
	tmp_str = "App Version: ";
	tmp_str + APP_VERSION;
	ui.versionLabel->setText(QString::fromStdString(tmp_str));
	ui.darkModeBox->setChecked(darkMode);
	ui.minimizeOnStartBox->setChecked(minimizeOnStart);
	ui.minimizeToTrayBox->setChecked(minimizeToTray);
	ui.openOnStartupBox->setChecked(openOnStartup);
	ui.debugModeBox->setChecked(debugMode);
	ui.typeNonMacroKeys->setChecked(typeNonMacroKeys);
	tmp_str = "Current Key to Append: ";
	if (keyToAppend > 0) {
		tmp_str += std::to_string(keyToAppend);
	}
	else {
		tmp_str += "N/A";
	}
	ui.currentKeyToAppendLabel->setText(QString::fromStdString(tmp_str));
}

void SettingsUI::darkModeAction(bool a) {
	Logger::print("Updating darkMode var. New value: ", a);
	darkMode = a;
	fileManager.updateConfig();
	app->updateTheme();

}
void SettingsUI::debugModeAction(bool a) {
	if (a == true) {
		::ShowWindow(::GetConsoleWindow(), SW_SHOW);
	}
	else {
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	}
	Logger::print("Updating Debug Mode var. New value: ", a);
	debugMode = a;
	fileManager.updateConfig();
}
void SettingsUI::openToTrayAction(bool a) {
	Logger::print("Updating Minimize on Startup var. New value: ", a);
	minimizeOnStart = a;
	fileManager.updateConfig();
}
void SettingsUI::minimizeToTrayAction(bool a) {
	Logger::print("Updating Minimize to Tray var. New value: ", a);
	minimizeToTray = a;
	fileManager.updateConfig();
}
void SettingsUI::openOnStartupAction(bool a) {
	Logger::print("Updating Open on start var. New value: ", a);
	openOnStartup = a;
	BackendUtils::toggleOpenOnStartup();
	fileManager.updateConfig();
}

void SettingsUI::registerDevAction() {
	if (!app->getAddMacroUI()->isVisible() && !app->getVirtualKeyboardUI()->isVisible()) {
		app->getDeviceUI()->show();
		setInterceptionState(InterceptionState::REGISTERINGDEV);
	}
}

void SettingsUI::resetDeviceIDAction() {
	if (!isRegistering()) setInterceptionState(InterceptionState::STOPPED);
	
	deviceID = 0;
	Logger::print("Reset device id. New ID: ", deviceID);
	fileManager.updateConfig();
	updateGUI();
	

	if (!isRegistering()) setInterceptionState(InterceptionState::INTERCEPTING);
}

void SettingsUI::typeNonMacroKeysAction(bool a) {
	Logger::print("Updating typeNonMacroKeys var. New value: ", a);
	if (!isRegistering()) setInterceptionState(InterceptionState::STOPPED);
	typeNonMacroKeys = a;
	fileManager.updateConfig();
	if (!isRegistering()) setInterceptionState(InterceptionState::INTERCEPTING);
}

void SettingsUI::registerKeyAction() {
	app->awaitVirtualKeyboard(3);
}

void SettingsUI::reigsterNewAppendedKey(int key) {
	Logger::print("Updating keyToAppend var. New value: ", key);
	if (!isRegistering()) setInterceptionState(InterceptionState::STOPPED);
	keyToAppend = key;
	fileManager.updateConfig();

	updateGUI();
	if (!isRegistering()) setInterceptionState(InterceptionState::INTERCEPTING);
}

void SettingsUI::clearAppendedKey() {
	reigsterNewAppendedKey(-1);
}
SettingsUI::~SettingsUI()
{
}
