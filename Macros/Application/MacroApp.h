#pragma once

#include <QtWidgets/QMainWindow>
#include <qfile>
#include <string>
#include "ui_MacroApp.h"
#include "Settings.h"
#include "DeviceUI.h"
#include "ActionEditor.h"
#include "MacroEditorUI.h"
#include "AddMacroUI.h"
#include <filesystem>
#include <qtimer.h>
#include <qmenu.h>
#include <qsystemtrayicon.h>
#include "VirtualKeyboard.h"

class MacroApp : public QMainWindow
{
    Q_OBJECT

public:
    MacroApp(QWidget *parent = Q_NULLPTR);
    
    void die(std::string reason);
    void updateMacroList();
    void updateTheme();
    Ui::MacroAppClass& getUI();
    MacroEditorUI* getMacroEditUI();
    DeviceUI* getDeviceUI();
    ActionEditor* getActionEditorUI();
    SettingsUI* getSettingsUI();
    AddMacroUI* getAddMacroUI();
    VirtualKeyboard* getVirtualKeyboardUI();
    void awaitVirtualKeyboard(int type);
    void openActionEditor(Action* action);
private slots:
    void settingsButtonAction();
    void openMacroEditor(const QModelIndex& index);
    void deleteMacroAction();
    void newMacroButtonAction();
    void RestoreWindowTrigger(QSystemTrayIcon::ActivationReason RW);
    void listContextMenuAction(const QPoint& pos);
private:
    Ui::MacroAppClass ui;
    MacroEditorUI* macroEditUI;
    DeviceUI* deviceUI;
    ActionEditor* actionEditorUI;
    SettingsUI* settingsUI;
    AddMacroUI* addMacroUI;
    VirtualKeyboard* virtualKeyboardUI;
    QMenu* trayIconMenu;
    QMenu* listContextMenu;
    QSystemTrayIcon* sysTrayIcon;
    void changeEvent(QEvent* e);
    void closeEvent(QCloseEvent* event);
};
