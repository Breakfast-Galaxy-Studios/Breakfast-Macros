#include "ActionHandler.h"
#include "Converter.h"
#include "Utils.h"

void ActionHandler::sendFakeKeys(std::vector<int>* keys, bool areKeysHeld) {
	//Declare stuff
	INPUT in;

	//Setup keyboard event
	in.type = INPUT_KEYBOARD;
	in.ki.wScan = 0;
	in.ki.time = 0;
	in.ki.dwExtraInfo = 0;

	
	if (areKeysHeld) {

		/* Send all key press events */
		in.ki.dwFlags = 0;
		for (int i = 0; i < keys->size(); i++) {
			in.ki.wVk = keys->at(i);
			SendInput(1, &in, sizeof(INPUT));
		}

		/* Send all key up events */
		in.ki.dwFlags = KEYEVENTF_KEYUP;
		for (int i = 0; i < keys->size(); i++) {
			in.ki.wVk = keys->at(i);
			SendInput(1, &in, sizeof(INPUT));
		}
	} else {
		/* Send all key press and key up events */
		for (int i = 0; i < keys->size(); i++) {
			in.ki.dwFlags = 0;
			in.ki.wVk = keys->at(i);
			SendInput(1, &in, sizeof(INPUT));
			in.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &in, sizeof(INPUT));
		}
	}
}

void ActionHandler::sendFakeKeys(std::vector<int> keys, bool areKeysHeld) {
	//Declare stuff
	INPUT in;

	//Setup keyboard event
	in.type = INPUT_KEYBOARD;
	in.ki.wScan = 0;
	in.ki.time = 0;
	in.ki.dwExtraInfo = 0;

	if (areKeysHeld) {
		/* Send all key press events */
		in.ki.dwFlags = 0;
		for (int i = 0; i < keys.size(); i++) {
			in.ki.wVk = keys.at(i);
			SendInput(1, &in, sizeof(INPUT));
		}

		/* Send all key up events */
		in.ki.dwFlags = KEYEVENTF_KEYUP;
		for (int i = 0; i < keys.size(); i++) {
			in.ki.wVk = keys.at(i);
			SendInput(1, &in, sizeof(INPUT));
		}
	}
	else {
		/* Send all key press and key up events */
		for (int i = 0; i < keys.size(); i++) {
			in.ki.dwFlags = 0;
			in.ki.wVk = keys.at(i);
			SendInput(1, &in, sizeof(INPUT));
			in.ki.dwFlags = KEYEVENTF_KEYUP;
			SendInput(1, &in, sizeof(INPUT));
		}
	}
}

void ActionHandler::openProgram(std::string path) {
	ShellExecute(NULL, L"open", Converter::s2ws(path).c_str(), NULL, NULL, SW_SHOWNORMAL);
}

void Action::setType(ActionType newType) {
	this->type = newType;
}
void Action::setName(std::string name) {
	this->name = name;
}
std::string Action::getName() {
	return name;
}
void Action::setPathToProgram(std::string newPath) {
	this->pathToProgram = newPath;
}
void Action::setKeysToPress(std::vector<int> newKeysToPress) {
	this->keysToPress = newKeysToPress;
}
void Action::setAreKeysHeld(bool newbool) {
	this->areKeysHeld = newbool;
}
std::vector<int> Action::getKeysToPress() { return keysToPress; }
std::string Action::getPathToProgram() { return pathToProgram; }
bool Action::getAreKeysHeld() {
	return areKeysHeld;
}
ActionType Action::getType() { return type; }
void Action::run() {
	switch (type) {
	case ActionType::OPEN_PROGRAM: {
		ActionHandler::openProgram(pathToProgram);
	}break;
	case ActionType::FAKE_KEYS: {
		ActionHandler::sendFakeKeys(keysToPress, areKeysHeld);
	}break;
	}
}
Action::Action() {
	keysToPress = std::vector<int>();
	setPathToProgram("null");
	type = ActionType::NULL_ACTION;
	setAreKeysHeld(true);
	setName("");
}
Action::Action(std::string name) {
	keysToPress = std::vector<int>();
	setPathToProgram("null");
	type = ActionType::NULL_ACTION;
	setAreKeysHeld(true);
	setName(name);
}
Action::Action(std::string name, std::vector<int> keysToPress, std::string pathToProgram, ActionType type, bool areKeysHeld) {
	setKeysToPress(keysToPress);
	setPathToProgram(pathToProgram);
	setType(type);
	setAreKeysHeld(areKeysHeld);
	setName(name);
}
Action::Action(std::string name, std::string pathToProgram) {
	keysToPress = std::vector<int>();
	setPathToProgram(pathToProgram);
	setType(ActionType::OPEN_PROGRAM);
	setAreKeysHeld(true);
	setName(name);
}
Action::Action(std::string name, std::vector<int> keysToPress, bool areKeysHeld) {
	setKeysToPress(keysToPress);
	setPathToProgram("");
	setType(ActionType::FAKE_KEYS);
	setAreKeysHeld(areKeysHeld);
	setName(name);
}

