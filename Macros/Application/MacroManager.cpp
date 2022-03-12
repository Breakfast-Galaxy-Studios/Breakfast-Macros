
#include "MacroManager.h"
#include "FileManager.h"
#include "InterceptionHandler.h"
#include "MacroApp.h"
extern FileManager fileManager;
extern MacroApp* app;

/*
 * Macro Class Begin
*/
Macro::Macro() {
	this->actions = std::vector<Action*>();
	this->keyToPress = 0;
	this->enabled = false;
	this->name = "null";
}
Macro::Macro(std::string name) {
	this->actions = std::vector<Action*>();
	this->keyToPress = 0;
	this->enabled = false;
	this->name = name;
}
Macro::Macro(std::string name, int keyToPress) {
	this->actions = std::vector<Action*>();
	this->keyToPress = keyToPress;
	this->enabled = false;
	this->name = name;
}
Macro::Macro(std::string name, int keyToPress, bool enabled) {
	this->actions = std::vector<Action*>();
	this->keyToPress = keyToPress;
	this->enabled = enabled;
	this->name = name;
}
Macro::Macro(std::string name, int keyToPress, bool enabled, std::vector<Action*> actions) {
	this->actions = actions;
	this->keyToPress = keyToPress;
	this->enabled = enabled;
	this->name = name;
}
std::vector <Action*>& Macro::getActions() { return actions; }
int Macro::getRequiredKey() { return keyToPress; }
bool Macro::isEnabled() { return enabled; }
std::string Macro::getName() { return name; }
void Macro::setName(std::string newname) { 
	//this is special. we do not mess with this set name stuff unless loading an action from a file
	name = newname;
}
void Macro::setKey(int newkey, bool autosave) { 
	if (isIntercepting()) {
		setInterceptionState(InterceptionState::STOPPED);
		keyToPress = newkey;
		setInterceptionState(InterceptionState::INTERCEPTING);
	} else {
		keyToPress = newkey;
	}
	if (autosave) save();
}
void Macro::setEnabled(bool status, bool autosave) {
	if (isIntercepting()) {
		setInterceptionState(InterceptionState::STOPPED);
		enabled = status;
		setInterceptionState(InterceptionState::INTERCEPTING);
	} else {
		enabled = status;
	}
	if (autosave) save();
}
void Macro::runActions() {
	for (auto action : actions) {
		if (action->getType() != ActionType::NULL_ACTION)
			action->run();
	}
}

void Macro::addAction(Action newAction, bool autosave) {
	if (newAction.getName().empty()) return;
	for (auto action : actions) {
		if (action->getName() == newAction.getName())
			return;
	}
	if (isIntercepting()) {
		setInterceptionState(InterceptionState::STOPPED);
		actions.push_back(new Action(newAction));
		setInterceptionState(InterceptionState::INTERCEPTING);
	} else {
		actions.push_back(new Action(newAction));
	}
	if (autosave) save();
}

Action* Macro::getAction(std::string name) {
	for (auto action : actions) {
		if (action->getName() == name)
			return action;
	}
	return nullptr;
}

void Macro::deleteAction(Action* toRemove) {
	for (int i = 0; i < actions.size(); i++) {
		if (actions.at(i) == toRemove) {
			delete actions.at(i);
			actions.erase(actions.begin() + i);
			break;
		}
	}
}
void Macro::deleteAction(std::string name) {
	for (int i = 0; i < actions.size(); i++) {
		if (actions.at(i)->getName() == name) {
			delete actions.at(i);
			actions.erase(actions.begin() + i);
			break;
		}
	}
}
void Macro::removeAction(Action* toRemove, bool autosave) {
	if (isIntercepting()) {
		setInterceptionState(InterceptionState::STOPPED);
		deleteAction(toRemove);
		setInterceptionState(InterceptionState::INTERCEPTING);
	}
	else {
		deleteAction(toRemove);
	}
	if (autosave) save();
}
void Macro::removeAction(std::string name, bool autosave) {
	if (isIntercepting()) {
		setInterceptionState(InterceptionState::STOPPED);
		deleteAction(name);
		setInterceptionState(InterceptionState::INTERCEPTING);
	} else {
		deleteAction(name);
	}
	if (autosave) save();
}

void Macro::save() {
	fileManager.saveMacro(this);
}
/*
 * Macro Class End
*/

Macro* MacroManager::getMacro(std::string name) {
	for (auto const& k : keys) {
		if (k->getName() == name)
			return k;
	}
	return nullptr;
}

bool MacroManager::contains(std::string name) {
	for (auto const& k : keys) {
		if (k->getName() == name)
			return true;
	}
	return false;
}
bool MacroManager::registerExistingMacro(Macro m, bool updateAppList) {
	if (!contains(m.getName())) {
		keys.push_back(new Macro(m.getName(), m.getRequiredKey(), m.isEnabled(), m.getActions()));
		if(updateAppList) app->updateMacroList();
		return true;
	}
	else {
		return false;
	}
}
bool MacroManager::registerNewMacro(Macro key) {
	if (isIntercepting()) {
		setInterceptionState(InterceptionState::STOPPED);
		if (registerExistingMacro(key, true)) {
			fileManager.saveMacro(key);
			setInterceptionState(InterceptionState::INTERCEPTING);
			return true;
		}
		setInterceptionState(InterceptionState::INTERCEPTING);
	} else {
		if (registerExistingMacro(key, true)) {
			fileManager.saveMacro(key);
			return true;
		}	
	}
	return false;
}
bool MacroManager::isMacroEnabled(std::string name) {
	if (contains(name)) {
		return getMacro(name)->isEnabled();
	}
	else {
		return false;
	}
}
void MacroManager::unregisterMacro(std::string name) {
	for (int i = 0; i < keys.size(); i++) {
		if (keys.at(i)->getName() == name) {
			fileManager.deleteMacro(keys.at(i));
			if (isIntercepting()) {
				setInterceptionState(InterceptionState::STOPPED);
				delete keys.at(i);
				keys.erase(keys.begin() + i);
				setInterceptionState(InterceptionState::INTERCEPTING);
			} else {
				delete keys.at(i);
				keys.erase(keys.begin() + i);
			}
			app->updateMacroList();
			break;
		}
	}
}
std::vector<Macro*>& MacroManager::getMacros() {
	return keys;
}
MacroManager::~MacroManager() {
	for (auto const& k : keys) {
		delete k;
	}
}