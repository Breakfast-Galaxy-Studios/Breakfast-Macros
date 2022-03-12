#include "ActionEditor.h"
#include "Converter.h"
#include "InterceptionHandler.h"
#include "MacroApp.h"
#include "qfiledialog.h"
#include "Utils.h"
extern MacroApp* app;

ActionEditor::ActionEditor(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(this->size());

	QRegularExpression nameRX("[0-9a-zA-Z\-\.]{0,255}");
	QValidator* nameValidator = new QRegularExpressionValidator(nameRX, this);
	ui.actionNameText->setValidator(nameValidator);

	listContextMenu = new QMenu(this);
	listContextMenu->addAction("Delete");
	ui.keysToPressBox->setContextMenuPolicy(Qt::CustomContextMenu);
	ui.keysToPressBox->setSortingEnabled(false);

	connect(ui.keysToPressBox, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(listContextMenuAction(const QPoint&)));
	connect(ui.chooseFileButton, SIGNAL(clicked()), this, SLOT(openFileChooser()));
	connect(ui.deleteKeyButton, SIGNAL(clicked()), this, SLOT(deleteKeyAction()));
	connect(ui.saveButton, SIGNAL(clicked()), this, SLOT(saveActionAction()));
	connect(ui.addKeyButton, SIGNAL(clicked()), this, SLOT(addKeyAction()));
}

void ActionEditor::listContextMenuAction(const QPoint& pos) {
	QPoint item = ui.keysToPressBox->mapToGlobal(pos);
	item.setX(item.x());
	QAction* rightClickItem = listContextMenu->exec(item);
	if (rightClickItem && rightClickItem->text().contains("Delete")) {
		deleteKeyAction();
	}
}

void ActionEditor::closeEvent(QCloseEvent* event) {
	clearGUI();
}

void ActionEditor::clearGUI() {
	ui.actionNameText->setText("");

	ui.actionTypeBox->setCurrentIndex(0);
	ui.programPathBox->setText("");
	ui.areKeysHeldBox->setChecked(0);
	ui.keysToPressBox->clear();
}

void ActionEditor::updateGUI() {

	clearGUI();

	if (currentAction != nullptr) {
		ui.actionNameText->setText(QString::fromStdString(currentAction->getName()));
		
		switch (currentAction->getType()) {
			case ActionType::FAKE_KEYS: {
				ui.actionTypeBox->setCurrentIndex(0);
			}break;
			case ActionType::OPEN_PROGRAM: {
				ui.actionTypeBox->setCurrentIndex(1);
			}break;
			default: { ui.actionTypeBox->setCurrentIndex(2); }
		}
		
		ui.programPathBox->setText(QString::fromStdString(currentAction->getPathToProgram()));
		if(currentAction->getAreKeysHeld())
		ui.areKeysHeldBox->setCheckState(Qt::CheckState::Checked);
		else
		ui.areKeysHeldBox->setCheckState(Qt::CheckState::Unchecked);

		ui.keysToPressBox->clear();

		for (auto key : currentAction->getKeysToPress()) {
			std::string str = Converter::virtualCodeToString(key);
			BackendUtils::findAndReplaceAll(str, "\n", " ");
			ui.keysToPressBox->addItem(QString::fromStdString(str));
		}
		
	}
}

void ActionEditor::setCurrentAction(Action* action) {
	currentAction = action;
	updateGUI();
}

void ActionEditor::setStyleSheet(const QString& styleSheet) {
	listContextMenu->setStyleSheet(styleSheet);
	QWidget::setStyleSheet(styleSheet);
}

void ActionEditor::saveActionAction() {
	if (currentAction != nullptr && !isRegistering()) {
		currentAction->setName(ui.actionNameText->text().toStdString());

		switch (ui.actionTypeBox->currentIndex()) {
			case 0: { currentAction->setType(ActionType::FAKE_KEYS); } break;
			case 1: { currentAction->setType(ActionType::OPEN_PROGRAM); } break;
			default: { currentAction->setType(ActionType::NULL_ACTION); }
		}

		currentAction->setPathToProgram(ui.programPathBox->text().toStdString());
		currentAction->setAreKeysHeld(ui.areKeysHeldBox->isChecked());
		std::vector<int> keysToPress;
		for (int i = 0; i < ui.keysToPressBox->count(); i++) {
			std::string str = ui.keysToPressBox->item(i)->text().toStdString();
			BackendUtils::findAndReplaceAll(str, " ", "\n");
			keysToPress.push_back(Converter::stringToVirtual(str));
		}

		currentAction->setKeysToPress(keysToPress); 
		app->getMacroEditUI()->saveMacroAction();
		app->getMacroEditUI()->updateGUI();
	}
}

void ActionEditor::openFileChooser() {
	ui.programPathBox->setText(QFileDialog::getOpenFileName(this, tr("Open File"), "/path/to/file/", tr("Exe Files (*.exe)")));
}

void ActionEditor::deleteKeyAction() {
	if (currentAction != nullptr) {
		delete ui.keysToPressBox->takeItem(ui.keysToPressBox->currentRow());
	}
}

void ActionEditor::addKeyAction() {
	app->awaitVirtualKeyboard(2);
}

Action* ActionEditor::getCurrentAction() {
	return currentAction;
}

void ActionEditor::newKey(int code) {
	if (currentAction != nullptr) {
		std::string str = Converter::virtualCodeToString(code);
		BackendUtils::findAndReplaceAll(str, "\n", " ");
		ui.keysToPressBox->addItem(QString::fromStdString(str));
	}
}

ActionEditor::~ActionEditor()
{
}
