#pragma once
#include <ShlObj.h>
#include <atlthunk.h>
#include <filesystem>
#include <fstream>

#include "MacroManager.h"
#include "json.hpp"
using json = nlohmann::json;
using std::string;
using std::filesystem::directory_iterator;
using std::filesystem::filesystem_error;
using std::filesystem::remove;
using std::vector;

class FileManager {
public:
	std::filesystem::path appDir;
	std::filesystem::path macrosDir;
	FileManager() {}
	void deleteMacro(string path);
	void deleteMacro(Macro* macro);
	void saveMacro(Macro macro);
	void saveMacro(Macro* macro);
	void updateConfig();
	std::filesystem::path getAppDir();
	void loadSettings();
	void loadMacros();
	bool setup();

};