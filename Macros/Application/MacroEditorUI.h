#pragma once

#include <QWidget>
#include <qmenu.h>
#include "ui_MacroEditorUI.h"
#include "MacroManager.h"

class MacroEditorUI : public QWidget
{
	Q_OBJECT

public:
	MacroEditorUI(QWidget *parent = Q_NULLPTR);
	~MacroEditorUI();
	std::string getCurrentMacroName();
	void updateGUI();
	void setNewMacro(Macro* m);
	Macro* getCurrentMacro();
	void newInterceptedKey(int k);
	void createNewAction(std::string name);
	void setStyleSheet(const QString& styleSheet);
public slots:
	void saveMacroAction();
	
private slots:
	void saveMacroNameAction();
	void newAction();
	void removeAction();
	void editAction(const QModelIndex& index);
	void keyChooseAction();
	void listContextMenuAction(const QPoint& pos);
	void saveMacroAction(int state);
private:
	Ui::MacroEditorUI ui;
	std::string currentMacroName;
	Macro* currentMacro;
	QMenu* listContextMenu;	
	void closeEvent(QCloseEvent* event);
};
