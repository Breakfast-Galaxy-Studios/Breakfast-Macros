#pragma once
#include <string>
#include "intercept.h"
#include "intutils.h"

typedef int VirtualKeycode;
typedef InterceptionKeyStroke RawKey;

enum class ActionType {
	FAKE_KEYS,
	OPEN_PROGRAM,
	NULL_ACTION
};

namespace Converter {
	std::string virtualCodeToString(VirtualKeycode vk);
	RawKey stringToRaw(std::string text);
	VirtualKeycode s2virtual1(std::string text);
	void s2virtual2(std::string text, VirtualKeycode& vk);
	std::string rawCodeToString(RawKey stroke);
	VirtualKeycode stringToVirtual(std::string text);
	VirtualKeycode rawCodeToVirtual(RawKey stroke);
	RawKey virtualCodeToRaw(VirtualKeycode vk);
	ActionType getActionType(std::string action);
	std::string getActionType(ActionType type);
	std::wstring s2ws(const std::string& s);
}