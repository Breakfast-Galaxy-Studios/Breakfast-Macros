#include "VirtualKeyboard.h"
#include <QLabel>
#include <qscrollarea.h>
#include <qfont.h>
#include <qboxlayout.h>
#include <iostream>
#include "Utils.h"
#include "Converter.h"
#include "MacroApp.h"

extern MacroApp* app;

VirtualKeyboard::VirtualKeyboard(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(this->size());

	for (QPushButton* p : ui.tab_AZ->findChildren<QPushButton*>()) connect(p, SIGNAL(clicked()), SLOT(parseButton()));
	for (QPushButton* p : ui.tab_Numbers->findChildren<QPushButton*>()) connect(p, SIGNAL(clicked()), SLOT(parseButton()));
	for (QPushButton* p : ui.tab_Punctuation->findChildren<QPushButton*>()) connect(p, SIGNAL(clicked()), SLOT(parseButton()));
	for (QPushButton* p : ui.tab_function->findChildren<QPushButton*>()) connect(p, SIGNAL(clicked()), SLOT(parseButton()));
	for (QPushButton* p : ui.tab_other->findChildren<QPushButton*>()) connect(p, SIGNAL(clicked()), SLOT(parseButton()));
	for (QPushButton* p : ui.tab_other2->findChildren<QPushButton*>()) connect(p, SIGNAL(clicked()), SLOT(parseButton()));
	resetGUI();
}

int VirtualKeyboard::getPressedKeyCode() {
	return pressedKeycode;
}

void VirtualKeyboard::setRegisterer(int registerer) {
	if (!this->isVisible()) this->registerer = registerer;
}

void VirtualKeyboard::resetGUI() {
	ui.tabWidget->setCurrentIndex(0);
	pressedKeycode = 0;
}

VirtualKeyboard::~VirtualKeyboard() {}

void VirtualKeyboard::parseButton() {
	QPushButton* buttonSender = qobject_cast<QPushButton*>(sender());
	std::string text = buttonSender->text().toStdString();
	pressedKeycode = Converter::stringToVirtual(text);
	Logger::print("VirtualKeyboard-KeyPressCode: ", pressedKeycode);

	switch (registerer) {
	case 1: { app->getMacroEditUI()->newInterceptedKey(pressedKeycode); } break;
	case 2: { app->getActionEditorUI()->newKey(pressedKeycode); } break;
	case 3: { app->getSettingsUI()->reigsterNewAppendedKey(pressedKeycode); } break;
	}
	this->close();
}