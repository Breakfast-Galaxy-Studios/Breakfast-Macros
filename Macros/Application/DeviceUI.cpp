#include "DeviceUI.h"
#include "MacroApp.h"
#include "FileManager.h"
#include "InterceptionHandler.h"
#include "Settings.h"
#include <QCloseEvent>

extern MacroApp* app;
extern FileManager fileManager;

DeviceUI::DeviceUI(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(this->size());
}

void DeviceUI::closeEvent(QCloseEvent* event) {
	setInterceptionState(InterceptionState::INTERCEPTING);
}
DeviceUI::~DeviceUI()
{
}
