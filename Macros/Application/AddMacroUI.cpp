#include "AddMacroUI.h"
#include "InterceptionHandler.h"
#include "MacroManager.h"
#include "MacroApp.h"
#include <qvalidator.h>
#include <qregularexpression.h>

extern MacroManager macroManager;
extern MacroApp* app;

AddMacroUI::AddMacroUI(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(this->size());
	QRegularExpression rx("[0-9a-zA-Z\-\.]{0,255}");
	QValidator* validator = new QRegularExpressionValidator(rx, this);
	ui.nameInputBox->setValidator(validator);
	connect(ui.noButton, SIGNAL(clicked()), this, SLOT(noButton()));
	connect(ui.yesButton, SIGNAL(clicked()), this, SLOT(yesButton()));
	
}

void AddMacroUI::yesButton() {
	if (!ui.nameInputBox->text().isEmpty()) {
		setInterceptionState(InterceptionState::STOPPED);
		switch (type) {
		case 1: {
			Macro newMacro(ui.nameInputBox->text().toStdString());
			macroManager.registerNewMacro(newMacro);
		}break;
		case 2: {
			app->getMacroEditUI()->createNewAction(ui.nameInputBox->text().toStdString());
		}break;
		default: {}
		}
		setInterceptionState(InterceptionState::INTERCEPTING);
	}
	this->close();
}

void AddMacroUI::setType(int type) {
	this->type = type;
	switch (type) {
	case 1: {
		ui.enterNameLabel->setText("Enter a name for the macro");
		this->setWindowTitle("New Macro");
	}break;
	case 2: {
		ui.enterNameLabel->setText("Enter a name for the action");
		this->setWindowTitle("New Action");
	}break;
	default: {}
	}
}

void AddMacroUI::noButton() {
	this->close();
}

void AddMacroUI::reset() {
	ui.nameInputBox->clear();
}

AddMacroUI::~AddMacroUI()
{
}
 