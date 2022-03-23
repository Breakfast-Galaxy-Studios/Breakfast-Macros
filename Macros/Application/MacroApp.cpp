#include <Windows.h>
#include "MacroApp.h"
#include "Utils.h"
#include "MacroManager.h"
#include "InterceptionHandler.h"
#include <thread>

extern bool darkMode;
extern bool debugMode;
extern bool minimizeToTray;
extern bool minimizeOnStart;
extern MacroManager macroManager;


MacroApp::MacroApp(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
    this->setFixedSize(this->size());
    macroEditUI = new MacroEditorUI();
    deviceUI = new  DeviceUI();
    actionEditorUI = new ActionEditor();
    settingsUI = new SettingsUI();
    addMacroUI = new AddMacroUI();
    virtualKeyboardUI = new VirtualKeyboard();


    auto showWindow = new QAction(tr("&Show Menu"), this);
    connect(showWindow, &QAction::triggered, [this]()
        {
            RestoreWindowTrigger(QSystemTrayIcon::DoubleClick);
        });

    auto exitAction = new QAction(tr("&Exit"), this);
    connect(exitAction, &QAction::triggered, [this]()
        {
            close();
            /*
            dont forget to fix this so everything stops and stuff like if they're recording a device
            */
        });
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(showWindow);
    trayIconMenu->addAction(exitAction);

    sysTrayIcon = new QSystemTrayIcon(this);
    sysTrayIcon->setContextMenu(trayIconMenu);
    std::string str = std::filesystem::current_path().string();
    str += "\\resources\\logo.png";
    sysTrayIcon->setIcon(QIcon(QString::fromStdString(str)));
    sysTrayIcon->connect(sysTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(RestoreWindowTrigger(QSystemTrayIcon::ActivationReason)));
    sysTrayIcon->setToolTip("Breakfast Macros");

    listContextMenu = new QMenu(this);
    listContextMenu->addAction("Edit");
    listContextMenu->addAction("Delete");
    ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    updateTheme();   
    updateMacroList();
   
    connect(ui.settingsButton, SIGNAL(clicked()), this, SLOT(settingsButtonAction()));
    connect(ui.deleteMacroButton, SIGNAL(clicked()), this, SLOT(deleteMacroAction()));
    connect(ui.newMacroButton, SIGNAL(clicked()), this, SLOT(newMacroButtonAction()));
    connect(ui.listWidget, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(openMacroEditor(const QModelIndex&)));
    connect(ui.listWidget, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(listContextMenuAction(const QPoint&)));
    //Window Settings
    setupInterception();

    if (minimizeOnStart) {
        closeToTray();
    }
}


void MacroApp::changeEvent(QEvent* e) {
    switch (e->type()) {
    case QEvent::LanguageChange: {
        ui.retranslateUi(this);
    }break;

    case QEvent::WindowStateChange: {
        if (this->windowState() & Qt::WindowMinimized) {
            if (minimizeToTray) {
                closeToTray();
            }
            else {
                this->showNormal();
            }
        }
    }break;
    default: break;

    }
    QMainWindow::changeEvent(e);

}

void MacroApp::awaitVirtualKeyboard(int type) {
    if (!isRegistering()) {
        virtualKeyboardUI->resetGUI();
        virtualKeyboardUI->setRegisterer(type);
        virtualKeyboardUI->show();
        virtualKeyboardUI->focusWidget();
    }
}


void MacroApp::openActionEditor(Action* action) {
    if (action != nullptr) {
        actionEditorUI->setCurrentAction(action);
        actionEditorUI->show();
    }
}

void MacroApp::updateMacroList() {
    ui.listWidget->clear();
    for(auto const& k : macroManager.getMacros())
        ui.listWidget->addItem(new QListWidgetItem(QString::fromStdString(k->getName())));
}

void MacroApp::deleteMacroAction() {
    QListWidgetItem* item = ui.listWidget->currentItem();
    if (item != nullptr) {
        std::string macroName = item->text().toStdString();
        macroManager.unregisterMacro(macroName);

        updateMacroList(); //update this gui
    }
}

void MacroApp::settingsButtonAction() {
    settingsUI->show();
    settingsUI->focusWidget();
}

void MacroApp::newMacroButtonAction() {
    if (!isRegistering()) {
        addMacroUI->reset();
        addMacroUI->setType(1);
        addMacroUI->show();
    }
}

void MacroApp::listContextMenuAction(const QPoint &pos) {
    QPoint item = ui.listWidget->mapToGlobal(pos);
    QAction* rightClickItem = listContextMenu->exec(item);
    if (rightClickItem && rightClickItem->text().contains("Edit")) {
        openMacroEditor(ui.listWidget->indexAt(pos));
    }
    else if (rightClickItem && rightClickItem->text().contains("Delete")) {
        deleteMacroAction();
    }
}

void MacroApp::updateTheme() {
    std::string settingsIconPath = std::filesystem::current_path().string();
    std::string styleSheetPath = settingsIconPath;
    if (darkMode) {
        styleSheetPath += "\\resources\\qdarkstyle\\dark\\style.qss";
        settingsIconPath += "\\resources\\iconblack.png";
    }
    else {
        styleSheetPath += "\\resources\\qdarkstyle\\light\\style.qss";
        settingsIconPath += "\\resources\\iconwhite.png";
    }
    QFile f(QString::fromStdString(styleSheetPath));

    if (!f.exists()) {
        die("A stylesheet could not be found.");
        return;
    } if (!std::filesystem::exists(settingsIconPath)) {
        die("An icon could not be found.");
        return;
    }
    f.open(QFile::ReadOnly | QFile::Text);
    QTextStream ts(&f);
    QString stylesheet = ts.readAll();
    this->setStyleSheet(stylesheet);

    settingsUI->setStyleSheet(stylesheet);
    macroEditUI->setStyleSheet(stylesheet);
    deviceUI->setStyleSheet(stylesheet);
    actionEditorUI->setStyleSheet(stylesheet);
    addMacroUI->setStyleSheet(stylesheet);
    virtualKeyboardUI->setStyleSheet(stylesheet);
    trayIconMenu->setStyleSheet(stylesheet);
    listContextMenu->setStyleSheet(stylesheet);
    ui.settingsButton->setIcon(QIcon(QString::fromStdString(settingsIconPath)));
}

void MacroApp::closeEvent(QCloseEvent* event) {
    QApplication::closeAllWindows();
    close();
    cleanupInterception();
}

void MacroApp::openMacroEditor(const QModelIndex& index) {
    QListWidgetItem* item = ui.listWidget->currentItem();
    if (item != nullptr) {
        macroEditUI->setNewMacro(macroManager.getMacro(item->text().toStdString()));
        macroEditUI->show();
    }
}

void MacroApp::RestoreWindowTrigger(QSystemTrayIcon::ActivationReason RW) {
    if (RW == QSystemTrayIcon::DoubleClick) {
        this->show();;
        if (debugMode) ::ShowWindow(::GetConsoleWindow(), SW_SHOW);
        ::ShowWindow((HWND)this->winId(), SW_RESTORE);
        sysTrayIcon->hide();
    }
}

void MacroApp::closeToTray() {
    QTimer::singleShot(250, this, SLOT(hide()));
    QTimer::singleShot(250, macroEditUI, SLOT(hide()));
    QTimer::singleShot(250, deviceUI, SLOT(hide()));
    QTimer::singleShot(250, actionEditorUI, SLOT(hide()));
    QTimer::singleShot(250, settingsUI, SLOT(hide()));
    QTimer::singleShot(250, virtualKeyboardUI, SLOT(hide()));
    if (isRegistering()) {
        setInterceptionState(InterceptionState::INTERCEPTING);
    }
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    sysTrayIcon->show();
}

Ui::MacroAppClass& MacroApp::getUI() {
    return ui;
}

MacroEditorUI* MacroApp::getMacroEditUI() {
    return macroEditUI;
}

DeviceUI* MacroApp::getDeviceUI() {
    return deviceUI;
}

VirtualKeyboard* MacroApp::getVirtualKeyboardUI() {
    return virtualKeyboardUI;
}
ActionEditor* MacroApp::getActionEditorUI() {
    return actionEditorUI;
}

SettingsUI* MacroApp::getSettingsUI() {
    return settingsUI;
}

AddMacroUI* MacroApp::getAddMacroUI() {
    return addMacroUI;
}

void MacroApp::die(std::string reason) {
    std::wstring str = Converter::s2ws(reason);
    LPCWSTR mes = str.c_str();
    MessageBox(0, mes, L"Critital Error!", MB_OK);
    int msgboxID = MessageBox(0, mes, L"Critital Error!", MB_OK);
    switch (msgboxID) {
    default: abort();
    }
}