#include "FileManager.h"
#include "Utils.h"
#include "json.hpp"
#include "MacroManager.h"

extern size_t deviceID;
extern int keyToAppend;
extern bool openOnStartup;
extern bool darkMode;
extern bool minimizeToTray;
extern bool minimizeOnStart;
extern bool debugMode;
extern bool typeNonMacroKeys;
extern MacroManager macroManager;

void FileManager::deleteMacro(string path) {
	try {
		remove(path);
	}
	catch (const filesystem_error& err) {
		Logger::print("FILESYSTEM ERROR: ", err.what());
	}
}

void FileManager::deleteMacro(Macro* macro) {
	try {
		string path = macrosDir.string();
		path += "\\" + macro->getName() + ".json";
		remove(path);
	}
	catch (const filesystem_error& err) {
		Logger::print("FILESYSTEM ERROR: ", err.what());
	}
}

void FileManager::saveMacro(Macro macro) {
	string path = macrosDir.string();
	path += "\\" + macro.getName() + ".json";

	json newSave;
	newSave["isEnabled"] = macro.isEnabled();
	newSave["keyToIntercept"] = macro.getRequiredKey();
	for (auto action : macro.getActions()) {
		std::string name = action->getName();
		newSave["actions"][name]["actionType"] = Converter::getActionType(action->getType());
		newSave["actions"][name]["name"] = action->getName();
		for (auto val : action->getKeysToPress()) {
			newSave["actions"][name]["keysToPress"].push_back(val);
		}
		newSave["actions"][name]["areKeysHeld"] = action->getAreKeysHeld();
		newSave["actions"][name]["pathToProgram"] = action->getPathToProgram();
	}
	std::ofstream file;
	file.open(path);
	file << std::setw(4) << newSave << std::endl;
	file.close();
}

void FileManager::saveMacro(Macro* macro) {
	string path = macrosDir.string();
	path += "\\" + macro->getName() + ".json";

	json newSave;
	newSave["isEnabled"] = macro->isEnabled();
	newSave["keyToIntercept"] = macro->getRequiredKey();
	for (auto action : macro->getActions()) {
		std::string name = action->getName();
		newSave["actions"][name]["actionType"] = Converter::getActionType(action->getType());
		newSave["actions"][name]["name"] = action->getName();
		for (auto val : action->getKeysToPress()) {
			newSave["actions"][name]["keysToPress"].push_back(val);
		}
		newSave["actions"][name]["areKeysHeld"] = action->getAreKeysHeld();
		newSave["actions"][name]["pathToProgram"] = action->getPathToProgram();
	}
	std::ofstream file;
	file.open(path);
	file << std::setw(4) << newSave << std::endl;
	file.close();
}

void FileManager::updateConfig() {
	string path = appDir.string();
	path += "\\settings.json";
	std::ifstream i(path);
	
	json jsonFile;
	try {
		i >> jsonFile;
	}
	catch (std::exception ex) {
		path = getAppDir().string();
		path += "\\settings.json";
		i = std::ifstream(path);
		i >> jsonFile;
	}

	jsonFile["deviceID"] = deviceID;
	jsonFile["openOnStartup"] = openOnStartup;
	jsonFile["minimizeOnStart"] = minimizeOnStart;
	jsonFile["minimizeToTray"] = minimizeToTray;
	jsonFile["debugMode"] = debugMode;
	jsonFile["darkMode"] = darkMode;
	jsonFile["typeNonMacroKeys"] = typeNonMacroKeys;
	jsonFile["keyToAppend"] = keyToAppend;

	std::ofstream settingsFile;
	settingsFile.open(path);
	settingsFile << std::setw(4) << jsonFile << std::endl;
	settingsFile.close();
	i.close();
	Logger::print("Config file updated", "");
}

void FileManager::loadSettings() {
	string path = appDir.string();
	path += "\\settings.json";

	if (!std::filesystem::exists(path)) {
		std::ofstream settingsFile;
		settingsFile.open(path);
		Logger::print("CONFIG: Config doesn't exist... Creating new config.", "");

		json baseFile = { {"openOnStartup", false}, {"darkMode", true},{"minimizeOnStart", false}, {"minimizeToTray", false}, {"deviceID", 0},{"typeNonMacroKeys", false}, {"keyToAppend", 0}, {"debugMode", false} }; std::ofstream fixedFile;

		settingsFile << std::setw(4) << baseFile << std::endl;
		settingsFile.close();

		openOnStartup = false;
		minimizeToTray = false;
		minimizeOnStart = false;
		darkMode = true;
		debugMode = false;
		keyToAppend = 0;
		typeNonMacroKeys = false;
		deviceID = 0;
	}
	else {
		std::ifstream i(path);
		Logger::print("CONFIG: ", path, " found.");
		Logger::print("CONFIG: Loading config.", "");
		json jsonFile;
		try {
			i >> jsonFile;
		}
		catch (nlohmann::detail::parse_error e) {
			Logger::print("CONFIG: Invalid config found. Resetting config.", "");

			json baseFile = { {"openOnStartup", false}, {"darkMode", true},{"minimizeOnStart", false}, {"minimizeToTray", false}, {"deviceID", 0},{"typeNonMacroKeys", false}, {"keyToAppend", 0}, {"debugMode", false} }; std::ofstream fixedFile;
			fixedFile.open(path);
			fixedFile << std::setw(4) << baseFile << std::endl;
			fixedFile.close();

			openOnStartup = false;
			minimizeToTray = false;
			minimizeOnStart = false;
			darkMode = true;
			debugMode = false;
			typeNonMacroKeys = false;
			keyToAppend = 0;
			deviceID = 0;
			return;
		}
		json patch;

		/* OPEN ON STARTUP CHECK */
		if (jsonFile.contains("openOnStartup")) {
			auto val = jsonFile.at("openOnStartup");
			if (BackendUtils::isIntegral<bool>(val)) {
				openOnStartup = val;
			}
			else {
				openOnStartup = false;
			}
			patch["openOnStartup"] = openOnStartup;

		}
		else {
			patch["openOnStartup"] = false;
			openOnStartup = false;
		}
		/* MINIMIZE TO TRAY CHECK */
		if (jsonFile.contains("minimizeToTray")) {
			auto val = jsonFile.at("minimizeToTray");
			if (BackendUtils::isIntegral<bool>(val)) {
				minimizeToTray = val;
			}
			else {
				minimizeToTray = false;
			}
			patch["minimizeToTray"] = minimizeToTray;

		}
		else {
			patch["minimizeToTray"] = false;
			minimizeToTray = false;
		}

		/* OPEN TO TRAY CHECK */
		if (jsonFile.contains("minimizeOnStart")) {
			auto val = jsonFile.at("minimizeOnStart");
			if (BackendUtils::isIntegral<bool>(val)) {
				minimizeOnStart = val;
			}
			else {
				minimizeOnStart = false;
			}
			patch["minimizeOnStart"] = minimizeOnStart;

		}
		else {
			patch["minimizeOnStart"] = false;
			minimizeOnStart = false;
		}

		/* DARK MODE CHECK */
		if (jsonFile.contains("darkMode")) {
			auto val = jsonFile.at("darkMode");
			if (BackendUtils::isIntegral<bool>(val)) {
				darkMode = val;
			}
			else {
				darkMode = true;
			}
			patch["darkMode"] = darkMode;
		}
		else {
			patch["darkMode"] = true;
			darkMode = true;
		}

		/* DEBUG MODE CHECK */
		if (jsonFile.contains("debugMode")) {
			auto val = jsonFile.at("debugMode");
			if (BackendUtils::isIntegral<bool>(val)) {
				debugMode = val;
			}
			else {
				debugMode = true;
			}
			patch["debugMode"] = debugMode;
		}
		else {
			patch["debugMode"] = true;
			debugMode = true;
		}

		/* DEVICE ID CHECK */
		if (jsonFile.contains("deviceID")) {
			auto val = jsonFile.at("deviceID");
			if (BackendUtils::isIntegral<unsigned long long>(val)) {
				deviceID = val;
			}
			else {
				deviceID = 0;
			}
			patch["deviceID"] = deviceID;
		}
		else {
			patch["deviceID"] = 0;
			deviceID = 0;
		}

		/* KEY TO APPEND CHECK */
		if (jsonFile.contains("keyToAppend")) {
			auto val = jsonFile.at("keyToAppend");
			if (BackendUtils::isIntegral<int>(val)) {
				keyToAppend = val;
			}
			else {
				keyToAppend = 0;
			}
			patch["keyToAppend"] = keyToAppend;
		}
		else {
			patch["keyToAppend"] = 0;
			keyToAppend = 0;
		}

		/* TYPE NON MACRO KEYS CHECK */
		if (jsonFile.contains("typeNonMacroKeys")) {
			auto val = jsonFile.at("typeNonMacroKeys");
			if (BackendUtils::isIntegral<bool>(val)) {
				typeNonMacroKeys = val;
			}
			else {
				typeNonMacroKeys = true;
			}
			patch["typeNonMacroKeys"] = typeNonMacroKeys;
		}
		else {
			patch["typeNonMacroKeys"] = true;
			typeNonMacroKeys = true;
		}

		if (jsonFile != patch) {
			std::ofstream fixedFile;
			fixedFile.open(path);
			fixedFile << std::setw(4) << patch << std::endl;
			fixedFile.close();
		}

		Logger::print("CONFIG: Loaded config.", "");
		i.close();
	}
	if (debugMode == true) {
		::ShowWindow(::GetConsoleWindow(), SW_SHOW);
	}
	else {
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	}
}

void FileManager::loadMacros()          {
	int amount = 0;
	Logger::print("MACRO: Loading macros...", "");
	for (const auto& file : directory_iterator(macrosDir)) {

		string path = file.path().string();

		if (file.path().extension().string() == ".json") {

			Macro macro;

			std::ifstream i(path);
			json jsonFile;
			try {
				i >> jsonFile;
			}
			catch (nlohmann::detail::parse_error e) {
				i.close();
				Logger::print("ERROR: Failed to load macro at ", path, " json is invalid.");
				continue;
			}

			if (jsonFile.contains("keyToIntercept")) {
				auto keyToIntercept = jsonFile.at("keyToIntercept");
				if (BackendUtils::isIntegral<int>(keyToIntercept)) macro.setKey(keyToIntercept, false, false);
				else {
					Logger::print("ERROR: Invalid Macro config at ", path, " keytoinercept option is bad.");
				}
			}
			else {
				Logger::print("ERROR: Invalid Macro config at ", path, " keytoinercept option is bad.");
			}

			if (jsonFile.contains("isEnabled")) {
				auto isEnabled = jsonFile.at("isEnabled");
				if (BackendUtils::isIntegral<bool>(isEnabled)) macro.setEnabled(isEnabled, false, false);
				else {
					Logger::print("ERROR: Failed to load enabled status at ", path, " isEnabled option is invalid.");
				}
			}
			else {
				Logger::print("ERROR: Failed to load enabled status at ", path, " isEnabled option is invalid.");
			}

			if (jsonFile.contains("actions")) {
				json actionList = jsonFile["actions"];
				for (auto listElement : actionList) {
					
					Action action;
					
					if (listElement.contains("name")) {
						if (listElement["name"].is_string()) {
							action.setName(listElement["name"]);
						}
					}

					if (listElement.contains("actionType")) {
						if (listElement["actionType"].is_string()) {
							action.setType(Converter::getActionType((string)listElement["actionType"]));

						}
					}

					if (listElement.contains("areKeysHeld")) {
						json data = listElement["areKeysHeld"];
						if (data.is_boolean()) {
							action.setAreKeysHeld(data);
						}
					}

					std::vector<int> keysToPress;
					if (listElement.contains("keysToPress")) {
						json data = listElement["keysToPress"];
						for (auto it = data.begin(); it != data.end(); ++it) {
							keysToPress.push_back((int)it.value());
						}
					}
					action.setKeysToPress(keysToPress);

					if (listElement.contains("pathToProgram")) {
						if (listElement["pathToProgram"].is_string()) {
							action.setPathToProgram(listElement["pathToProgram"]);
						}
					}

					macro.addAction(action, false, false);
				}
				
			}

			const size_t last_slash_idx = path.find_last_of("\\/");
			if (string::npos != last_slash_idx) {
				path.erase(0, last_slash_idx + 1);
			}
			const size_t period_idx = path.rfind('.');
			if (string::npos != period_idx) {
				path.erase(period_idx);
			}
			if (path == "null") {
				i.close();
				deleteMacro(path);
				continue;
			}

			macro.setName(path);
			macroManager.registerExistingMacro(macro, false);
			i.close();

			amount++;
		}

	}
	Logger::print("MACRO: Loaded ", amount, " macro(s).");
}

std::filesystem::path FileManager::getAppDir() {
	PWSTR tmp;
	auto folderValue = SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, nullptr, &tmp);

	if (folderValue != S_OK) {
		Logger::print("FILEUTIL Error: folder value is invalid. Report this on Github if you are on windows.");
		CoTaskMemFree(tmp);
		std::abort();
	}

    std::filesystem::path p = tmp; // Convert PWSTR to path
	p += "\\BGSMacros";
	CoTaskMemFree(tmp);
	return p;
}
bool FileManager::setup() {

	appDir = getAppDir();
	macrosDir = appDir;
	macrosDir += "\\macros";

	Logger::print("VAR-appDir: ", appDir.string());
	Logger::print("VAR-macrosDir: ", macrosDir.string());

	//Creates directories and checks if it worked
	if ((CreateDirectory(appDir.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) &&
		(CreateDirectory(macrosDir.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError())) {
		//proceed with file creation and reading of configs.

		loadSettings();
		loadMacros();

		return true;
	}
	else {
		// Failed to create directory.
		Logger::print("Debug - FILEUTIL Error : Failed to create directory.Report this on Github if you are on windows.");
		return false;
	}

}