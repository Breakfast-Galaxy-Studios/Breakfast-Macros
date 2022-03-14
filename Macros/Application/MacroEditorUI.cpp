#include "MacroEditorUI.h"
#include "FileManager.h"
#include "InterceptionHandler.h"
#include "MacroApp.h"
#include "Utils.h"
#include "Converter.h"
#include "MacroManager.h"

extern FileManager fileManager;
extern MacroManager macroManager;
extern MacroApp* app;

MacroEditorUI::MacroEditorUI(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(this->size());
	currentMacro = nullptr;

	QRegularExpression nameRX("[0-9a-zA-Z\-\.]{0,255}");
	QValidator* nameValidator = new QRegularExpressionValidator(nameRX, this);
	ui.macroNameText->setValidator(nameValidator);

	listContextMenu = new QMenu(this);
	listContextMenu->addAction("Edit");
	listContextMenu->addAction("Delete");
	ui.actionList->setContextMenuPolicy(Qt::CustomContextMenu);

	connect(ui.enabledBox, SIGNAL(stateChanged(int)), this, SLOT(saveMacroAction(int)));
	connect(ui.chooseKeyButton, SIGNAL(clicked()), this, SLOT(keyChooseAction()));
	connect(ui.saveNameButton, SIGNAL(clicked()), this, SLOT(saveMacroNameAction()));
	connect(ui.newActionButton, SIGNAL(clicked()), this, SLOT(newAction()));
	connect(ui.actionList, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(editAction(const QModelIndex&)));
	connect(ui.actionList, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(listContextMenuAction(const QPoint&)));
	connect(ui.deleteActionButton, SIGNAL(clicked()), this, SLOT(removeAction()));
}

void MacroEditorUI::editAction(const QModelIndex& index) {
	QListWidgetItem* item = ui.actionList->currentItem();
	if (currentMacro != nullptr && item != nullptr)
		app->openActionEditor(currentMacro->getAction(item->text().toStdString()));
}

void MacroEditorUI::listContextMenuAction(const QPoint& pos) {
	QPoint item = ui.actionList->mapToGlobal(pos);
	QAction* rightClickItem = listContextMenu->exec(item);
	if (rightClickItem && rightClickItem->text().contains("Edit")) {
		editAction(ui.actionList->indexAt(pos));
	}
	else if (rightClickItem && rightClickItem->text().contains("Delete")) {
		removeAction();
	}
}

void MacroEditorUI::updateGUI() {
	if (currentMacro != nullptr) {
		currentMacroName = currentMacro->getName();
		ui.macroNameText->setText(QString::fromStdString(currentMacroName));
		int key = currentMacro->getRequiredKey();
		std::string str;
		if (key > 0) str = Converter::virtualCodeToString(key);
		else str = "N/A";
		BackendUtils::findAndReplaceAll(str, "\n", " ");
		ui.interceptedKeyText->setText(QString::fromStdString(str));
		ui.enabledBox->setChecked(currentMacro->isEnabled());
		ui.actionList->clear();
		for (auto action : currentMacro->getActions()) {
			ui.actionList->addItem(QString::fromStdString(action->getName()));
		}
	} else {
		currentMacroName = "null";
		ui.macroNameText->setText("null");
		ui.interceptedKeyText->setText("null");
		ui.actionList->clear();
	}
}

void MacroEditorUI::setNewMacro(Macro* m) {
	currentMacro = m;
	updateGUI();
}
void MacroEditorUI::createNewAction(std::string name) {
	if (currentMacro != nullptr) {
		Action action(name);
		currentMacro->addAction(action, true, true);
		updateGUI();
	}
}
void MacroEditorUI::setStyleSheet(const QString& styleSheet) {
	listContextMenu->setStyleSheet(styleSheet);
	QWidget::setStyleSheet(styleSheet);
}

void MacroEditorUI::saveMacroAction() {
	if (currentMacro != nullptr && !isRegistering()) {
		setInterceptionState(InterceptionState::STOPPED);
		currentMacro->save();
		setInterceptionState(InterceptionState::INTERCEPTING);
	}
}

void MacroEditorUI::saveMacroAction(int state) {
	if (currentMacro != nullptr && !isRegistering()) {
		currentMacro->setEnabled(state, true, true);
	}
}

void MacroEditorUI::closeEvent(QCloseEvent* event) {
	close();
	currentMacro = nullptr;
	app->getActionEditorUI()->close();
	app->getVirtualKeyboardUI()->close();
}

void MacroEditorUI::newAction() {
	if (!isRegistering()) {
		AddMacroUI *addUI = app->getAddMacroUI();
		addUI->reset();
		addUI->setType(2);
		addUI->show();
	}
}

void MacroEditorUI::removeAction() {
	QListWidgetItem* item = ui.actionList->currentItem();
	if (currentMacro != nullptr && item != nullptr) {
		std::string name = item->text().toStdString();

		if (app->getActionEditorUI()->getCurrentAction() == currentMacro->getAction(name)) {
			app->getActionEditorUI()->close();
		}

		currentMacro->removeAction(name, true, true);
		updateGUI();
		
	}
}

void MacroEditorUI::keyChooseAction() {
	app->awaitVirtualKeyboard(1);
}

void MacroEditorUI::newInterceptedKey(int k) {
	if (currentMacro != nullptr) {
		currentMacro->setKey(k, true, true);
		updateGUI();
	}
}

void MacroEditorUI::saveMacroNameAction() {
	app->getActionEditorUI()->close();
	app->getVirtualKeyboardUI()->close();

	std::string pastName = currentMacro->getName();

	Macro macro;
	
	macro.setName(ui.macroNameText->text().toStdString());
	macro.setKey(currentMacro->getRequiredKey(), false, true);
	macro.setEnabled(currentMacro->isEnabled(), false, true);
	
	for (auto a : currentMacro->getActions()) {
		macro.addAction(Action(a->getName(), a->getKeysToPress(), a->getPathToProgram(), a->getType(), a->getAreKeysHeld()), false, true);
	}
	
	macroManager.unregisterMacro(pastName);
	macroManager.registerNewMacro(macro);
	currentMacro = macroManager.getMacro(macro.getName());

	updateGUI();
	app->updateMacroList();
	Logger::print("Update macro name for macro \"", pastName, "\" new name is: ", macro.getName());
}

std::string MacroEditorUI::getCurrentMacroName() {
	return ui.macroNameText->text().toStdString();
}

Macro* MacroEditorUI::getCurrentMacro() {
	return currentMacro;
}

MacroEditorUI::~MacroEditorUI()
{
}