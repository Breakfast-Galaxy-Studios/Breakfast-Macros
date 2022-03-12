#pragma once
#include "ActionHandler.h"
#include <map>
class Macro {
private:
	std::vector<Action*> actions;
	int keyToPress;
	bool enabled;
	std::string name;
	void deleteAction(Action* action);
	void deleteAction(std::string name);
public:
	Macro();
	Macro(std::string name);
	Macro(std::string name, int keyToPress);
	Macro(std::string name, int keyToPress, bool enabled);
	Macro(std::string name, int keyToPress, bool enabled, std::vector<Action*> actions);
	std::vector<Action*>& getActions();
	int getRequiredKey();
	bool isEnabled();
	std::string getName();
	void setName(std::string newname);
	void setKey(int newkey, bool autosave);
	void setEnabled(bool status, bool autosave);
	void removeAction(Action* toRemove, bool autosave);
	void removeAction(std::string name, bool autosave);
	void addAction(Action newAction, bool autosave);
	Action* getAction(std::string name);
	void runActions();
	void save();
};

class MacroManager {
private:
	std::vector<Macro*> keys;
public:
	Macro* getMacro(std::string name);
	std::vector<Macro*>& getMacros();
	bool contains(std::string name);
	bool registerExistingMacro(Macro m, bool updateAppList);
	bool registerNewMacro(Macro key);
	bool isMacroEnabled(std::string name);
	void unregisterMacro(std::string name);
	~MacroManager();
};