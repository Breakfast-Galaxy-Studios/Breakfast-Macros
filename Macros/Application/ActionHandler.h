#pragma once
#include <ShlObj.h>
#include <atlthunk.h>
#include <filesystem>
#include <fstream>
#include "Converter.h"

namespace ActionHandler {
	void sendFakeKeys(std::vector<int>* keys, bool areKeysHeld);
	void sendFakeKeys(std::vector<int> keys, bool areKeysHeld);
	void openProgram(std::string path);
}

class Action {
private:
	std::vector<int> keysToPress;
	bool areKeysHeld;
	std::string pathToProgram;
	ActionType type;
	std::string name;
public:
	void setType(ActionType newType);
	void setPathToProgram(std::string newPath);
	void setKeysToPress(std::vector<int> newKeysToPress);
	void setAreKeysHeld(bool newbool);
	void setName(std::string name);
	std::string getName();
	std::vector<int> getKeysToPress();
	std::string getPathToProgram();
	ActionType getType();
	bool getAreKeysHeld();
	void run();
	Action();
	Action(std::string name);
	Action(std::string name, std::vector<int> keysToPress, std::string pathToProgram, ActionType type, bool areKeysHeld);
	Action(std::string name, std::string pathToProgram);
	Action(std::string name, std::vector<int> keysToPress, bool areKeysHeld);
};

