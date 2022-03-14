#include <QtWidgets/QApplication>
#include <qfile.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <curl/curl.h>
#include "Utils.h"
#include "MacroApp.h"
#include "MacroManager.h"
#include "FileManager.h"
#include "InterceptionHandler.h"
#include "AddMacroUI.h"

size_t deviceID;
int keyToAppend;
bool openOnStartup;
bool darkMode;
bool minimizeToTray;
bool minimizeOnStart;
bool debugMode;
bool typeNonMacroKeys;
MacroManager macroManager;
FileManager fileManager;
MacroApp* app;

/*
*  APP VERSION THING MAKE SURE TO CHANGE THIS EVERY UPDATE.
*/
std::string APP_VERSION = "1.1";

void createConsole() {
    AllocConsole();
    FILE* pFileCon = NULL;
    pFileCon = freopen("CONOUT$", "w", stdout);

    COORD coordInfo;
    coordInfo.X = 130;
    coordInfo.Y = 9000;

    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coordInfo);
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_QUICK_EDIT_MODE | ENABLE_EXTENDED_FLAGS);
}

int main(int argc, char *argv[]) {
    /*
     * Setup stuff yayy
     */
    
    createConsole();
    fileManager.setup();
	BackendUtils::checkForUpdates();
    QApplication a(argc, argv);
    app = new MacroApp();
    app->show();
    return a.exec();
}
