#pragma once

#include <QWidget>
#include <qmenu.h>
#include "ui_ActionEditor.h"
#include "ActionHandler.h"
class ActionEditor : public QWidget
{
	Q_OBJECT

public:
	ActionEditor(QWidget* parent = Q_NULLPTR);
	~ActionEditor();
	void setStyleSheet(const QString& styleSheet);
	void updateGUI();
	void setCurrentAction(Action* action);
	void newKey(int code);
	void clearGUI();
	Action* getCurrentAction();
private slots:
	void addKeyAction();
	void deleteKeyAction();
	void listContextMenuAction(const QPoint& pos);
	void saveActionAction();
	void openFileChooser();
private:
	Ui::ActionEditor ui;
	Action* currentAction;
	QMenu* listContextMenu;
	void closeEvent(QCloseEvent* event);
};
