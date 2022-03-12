#include "Converter.h"
#include <Windows.h>
#include "Utils.h"

//Convert string to wstring
std::wstring Converter::s2ws(const std::string& s) {
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}
//Get ActionType(enum) from string
ActionType Converter::getActionType(std::string action) {
	if (action == "FAKE_KEYS") {
		return ActionType::FAKE_KEYS;
	}
	if (action == "OPEN_PROGRAM")
		return ActionType::OPEN_PROGRAM;
	else return ActionType::NULL_ACTION;
}


// Get String from ActionType(enum)
std::string Converter::getActionType(ActionType type) {
	switch (type) {
	case ActionType::FAKE_KEYS:
		return "FAKE_KEYS";
		break;
	case ActionType::OPEN_PROGRAM:
		return "OPEN_PROGRAM";
		break;
	default:
		return "NULL_ACTION";
	}
}

std::string Converter::virtualCodeToString(VirtualKeycode vk) {
		switch (vk) {
		case 0x41: { return "A"; } break;
		case 0x42: { return "B"; } break;
		case 0x43: { return "C"; } break;
		case 0x44: { return "D"; } break;
		case 0x45: { return "E"; } break;
		case 0x46: { return "F"; } break;
		case 0x47: { return "G"; } break;
		case 0x48: { return "H"; } break;
		case 0x49: { return "I"; } break;
		case 0x4A: { return "J"; } break;
		case 0x4B: { return "K"; } break;
		case 0x4C: { return "L"; } break;
		case 0x4D: { return "M"; } break;
		case 0x4E: { return "N"; } break;
		case 0x4F: { return "O"; } break;
		case 0x50: { return "P"; } break;
		case 0x51: { return "Q"; } break;
		case 0x52: { return "R"; } break;
		case 0x53: { return "S"; } break;
		case 0x54: { return "T"; } break;
		case 0x55: { return "U"; } break;
		case 0x56: { return "V"; } break;
		case 0x57: { return "W"; } break;
		case 0x58: { return "X"; } break;
		case 0x59: { return "Y"; } break;
		case 0x5A: { return "Z"; } break;
		case 0x30: { return "0"; } break;
		case 0x31: { return "1"; } break;
		case 0x32: { return "2"; } break;
		case 0x33: { return "3"; } break;
		case 0x34: { return "4"; } break;
		case 0x35: { return "5"; } break;
		case 0x36: { return "6"; } break;
		case 0x37: { return "7"; } break;
		case 0x38: { return "8";  } break;
		case 0x39: { return "9"; } break;
		case 0x60: { return "Num0"; } break;
		case 0x61: { return "Num1"; } break;
		case 0x62: { return "Num2"; } break;
		case 0x63: { return "Num3"; } break;
		case 0x64: { return "Num4"; } break;
		case 0x65: { return "Num5"; } break;
		case 0x66: { return "Num6"; } break;
		case 0x67: { return "Num7"; } break;
		case 0x68: { return "Num8"; } break;
		case 0x69: { return "Num9"; } break;
		case 0xC0: { return "`"; } break;
		case 0xBF: { return "/"; } break;
		case 0xBE: { return "."; } break;
		case 0xBC: { return ","; } break;
		case 0xDE: { return "'"; } break;
		case 0xBA: { return ";"; } break;
		case 0xDD: { return "]"; } break;
		case 0xDB: { return "["; } break;
		case 0xDC: { return "\\"; } break;
		case 0xBB: { return "="; } break;
		case 0xBD: { return "-"; } break;
		case 0x6F: { return "Num/"; } break;
		case 0x6A: { return "Num*"; } break;
		case 0x6D: { return "Num-"; } break;
		case 0x6B: { return "Num+"; } break;
		case 0x6E: { return "Num."; } break;
		case 0x70: { return "F1"; } break;
		case 0x71: { return "F2"; } break;
		case 0x72: { return "F3"; } break;
		case 0x73: { return "F4"; } break;
		case 0x74: { return "F5"; } break;
		case 0x75: { return "F6"; } break;
		case 0x76: { return "F7"; } break;
		case 0x77: { return "F8"; } break;
		case 0x78: { return "F9"; } break;
		case 0x79: { return "F10"; } break;
		case 0x7A: { return "F11"; } break;
		case 0x7B: { return "F12"; } break;
		case 0x7C: { return "F13"; } break;
		case 0x7D: { return "F14"; } break;
		case 0x7E: { return "F15"; } break;
		case 0x7F: { return "F16"; } break;
		case 0x80: { return "F17"; } break;
		case 0x81: { return "F18"; } break;
		case 0x82: { return "F19"; } break;
		case 0x83: { return "F20"; } break;
		case 0x84: { return "F21"; } break;
		case 0x85: { return "F22"; } break;
		case 0x86: { return "F23"; } break;
		case 0x87: { return "F24"; } break;
		case 0x1B: { return "Escape"; } break;
		case 0x08: { return "Back\nSpace"; } break;
		case 0x09: { return "Tab"; } break;
		case 0x14: { return "Caps\nLock"; } break;
		case 0x0D: { return "Enter"; } break;
		case 0xA0: { return "Left\nShift"; } break;
		case 0xA1: { return "Right\nShift"; } break;
		case 0XA2: { return "Left\nCtrl"; } break;
		case 0x5B: { return "Windows"; } break;
		case 0xA4: { return "Left\nAlt"; } break;
		case 0x20: { return "Space"; } break;
		case 0x2E: { return "Delete"; } break;
		case 0x5D: { return "Context\nMenu"; } break;
		case 0xA5: { return "Right\nAlt"; } break;
		case 0xA3: { return "Right\nCtrl"; } break;
		case 0x2C: { return "Print\nScreen"; } break;
		case 0x2D: { return "Insert"; } break;
		case 0x24: { return "Home"; } break;
		case 0x21: { return "Page Up"; } break;
		case 0x23: { return "End"; } break;
		case 0x22: { return "Page\nDown"; } break;
		case 0x27: { return "Right\nArrow"; } break;
		case 0x26: { return "Up\nArrow"; } break;
		case 0x25: { return "Left\nArrow"; } break;
		case 0x28: { return "Down\nArrow"; } break;
		case 0xAF: { return "Volume\nUp"; } break;
		case 0xAE: { return "Volume\nDown"; } break;
		case 0xAD: { return "Volume\nMute"; } break;
		case 0xB0: { return "Media\nNext\nTrack"; } break;
		case 0xB1: { return "Media\nPrev\nTrack"; } break;
		case 0xB2: { return "Media\nStop"; } break;
		case 0xB3: { return "Toggle\nMedia"; } break;
		case 0xF9: { return "EREOF"; } break;
		case 0xFD: { return "End\nCurrent\nTask"; } break;
		case 0x15: { return "Kana"; } break;
		case 0x19: { return "Kanji"; } break;
		case 0x1D: { return "Non\nConvert"; } break;
		case 0x1F: { return "Mode\nChange"; } break;
		case 0xAC: { return "Browser\nHome"; } break;
		case 0xA8: { return "Browser\nRefresh"; } break;
		case 0x92: { return "Jisho"; } break;
		default: { return ""; }
		}
	}
RawKey Converter::stringToRaw(std::string text) {
		RawKey toReturn;
		toReturn.code = -1;
		if (text == "A") toReturn.code = 30;
		else if (text == "B") toReturn.code = 48;
		else if (text == "C") toReturn.code = 46;
		else if (text == "D") toReturn.code = 32;
		else if (text == "E") toReturn.code = 18;
		else if (text == "F") toReturn.code = 33;
		else if (text == "G") toReturn.code = 34;
		else if (text == "H") toReturn.code = 35;
		else if (text == "I") toReturn.code = 23;
		else if (text == "J") toReturn.code = 36;
		else if (text == "K") toReturn.code = 37;
		else if (text == "L") toReturn.code = 38;
		else if (text == "M") toReturn.code = 50;
		else if (text == "N") toReturn.code = 49;
		else if (text == "O") toReturn.code = 24;
		else if (text == "P") toReturn.code = 25;
		else if (text == "Q") toReturn.code = 16;
		else if (text == "R") toReturn.code = 19;
		else if (text == "S") toReturn.code = 31;
		else if (text == "T") toReturn.code = 20;
		else if (text == "U") toReturn.code = 22;
		else if (text == "V") toReturn.code = 47;
		else if (text == "W") toReturn.code = 17;
		else if (text == "X") toReturn.code = 45;
		else if (text == "Y") toReturn.code = 21;
		else if (text == "Z") toReturn.code = 44;
		else if (text == "0") toReturn.code = 11;
		else if (text == "1") toReturn.code = 2;
		else if (text == "2") toReturn.code = 3;
		else if (text == "3") toReturn.code = 4;
		else if (text == "4") toReturn.code = 5;
		else if (text == "5") toReturn.code = 6;
		else if (text == "6") toReturn.code = 7;
		else if (text == "7") toReturn.code = 8;
		else if (text == "8") toReturn.code = 9;
		else if (text == "9") toReturn.code = 10;
		else if (text == "Num0") toReturn.code = 82;
		else if (text == "Num1") toReturn.code = 79;
		else if (text == "Num2") toReturn.code = 80;
		else if (text == "Num3") toReturn.code = 81;
		else if (text == "Num4") toReturn.code = 75;
		else if (text == "Num5") toReturn.code = 76;
		else if (text == "Num6") toReturn.code = 77;
		else if (text == "Num7") toReturn.code = 71;
		else if (text == "Num8") toReturn.code = 72;
		else if (text == "Num9") toReturn.code = 73;
		else if (text == "`") toReturn.code = 41;
		else if (text == "/") toReturn.code = 53;
		else if (text == ".") toReturn.code = 52;
		else if (text == ",") toReturn.code = 51;
		else if (text == "'") toReturn.code = 40;
		else if (text == ";") toReturn.code = 39;
		else if (text == "]") toReturn.code = 27;
		else if (text == "[") toReturn.code = 26;
		else if (text == "\\") toReturn.code = 43;
		else if (text == "=") toReturn.code = 13;
		else if (text == "-") toReturn.code = 12;
		else if (text == "Num/") { toReturn.code = 53; toReturn.state = 2; }
		else if (text == "Num*") toReturn.code = 55;
		else if (text == "Num-") toReturn.code = 74;
		else if (text == "Num+") toReturn.code = 78;
		else if (text == "F1") toReturn.code = 59;
		else if (text == "F2") toReturn.code = 60;
		else if (text == "F3") toReturn.code = 61;
		else if (text == "F4") toReturn.code = 62;
		else if (text == "F5") toReturn.code = 63;
		else if (text == "F6") toReturn.code = 64;
		else if (text == "F7") toReturn.code = 65;
		else if (text == "F8") toReturn.code = 66;
		else if (text == "F9") toReturn.code = 67;
		else if (text == "F10") toReturn.code = 68;
		else if (text == "F11") toReturn.code = 87;
		else if (text == "F12") toReturn.code = 88;
		else if (text == "Escape") toReturn.code = 1;
		else if (text == "Back\nSpace") toReturn.code = 14;
		else if (text == "Tab") toReturn.code = 15;
		else if (text == "Caps\nLock") toReturn.code = 58;
		else if (text == "Enter") toReturn.code = 28;
		else if (text == "Left\nShift") toReturn.code = 42;
		else if (text == "Right\nShift") toReturn.code = 54;
		else if (text == "Left\nCtrl") toReturn.code = 29;
		else if (text == "Windows") { toReturn.code = 91; toReturn.state = 2; }
		else if (text == "Left\nAlt") toReturn.code = 56;
		else if (text == "Space") toReturn.code = 57;
		else if (text == "Right\nAlt") { toReturn.code = 56; toReturn.state = 2; }
		else if (text == "Right\nCtrl") { toReturn.code = 29; toReturn.state = 2; }
		else if (text == "Insert") { toReturn.code = 82; toReturn.state = 2; }
		else if (text == "Home") { toReturn.code = 71; toReturn.state = 2; }
		else if (text == "Page Up") { toReturn.code = 73;  toReturn.state = 2; }
		else if (text == "Delete") { toReturn.code = 83;  toReturn.state = 2; }
		else if (text == "End") { toReturn.code = 79;  toReturn.state = 2; }
		else if (text == "Page\nDown") { toReturn.code = 81; toReturn.state = 2; }
		else if (text == "Right\nArrow") { toReturn.code = 77;  toReturn.state = 2; }
		else if (text == "Up\nArrow") { toReturn.code = 72;  toReturn.state = 2; }
		else if (text == "Left\nArrow") { toReturn.code = 75;  toReturn.state = 2; }
		else if (text == "Down\nArrow") { toReturn.code = 80; toReturn.state = 2; }
		else if (text == "Context\nMenu") { toReturn.code = 93; toReturn.state = 2; }
		else if (text == "Num.") { toReturn.code = 83; }
		else toReturn.code = -1;
		return toReturn;
	}
VirtualKeycode Converter::s2virtual1(std::string text) {
		if (text == "A") return 0x41;
		else if (text == "B") return 0x42;
		else if (text == "C") return 0x43;
		else if (text == "D") return 0x44;
		else if (text == "E") return 0x45;
		else if (text == "F") return 0x46;
		else if (text == "G") return 0x47;
		else if (text == "H") return 0x48;
		else if (text == "I") return 0x49;
		else if (text == "J") return 0x4A;
		else if (text == "K") return 0x4B;
		else if (text == "L") return 0x4C;
		else if (text == "M") return 0x4D;
		else if (text == "N") return 0x4E;
		else if (text == "O") return 0x4F;
		else if (text == "P") return 0x50;
		else if (text == "Q") return 0x51;
		else if (text == "R") return 0x52;
		else if (text == "S") return 0x53;
		else if (text == "T") return 0x54;
		else if (text == "U") return 0x55;
		else if (text == "V") return 0x56;
		else if (text == "W") return 0x57;
		else if (text == "X") return 0x58;
		else if (text == "Y") return 0x59;
		else if (text == "Z") return 0x5A;
		else if (text == "0") return 0x30;
		else if (text == "1") return 0x31;
		else if (text == "2") return 0x32;
		else if (text == "3") return 0x33;
		else if (text == "4") return 0x34;
		else if (text == "5") return 0x35;
		else if (text == "6") return 0x36;
		else if (text == "7") return 0x37;
		else if (text == "8") return 0x38;
		else if (text == "9") return 0x39;
		else if (text == "Num0") return 0x60;
		else if (text == "Num1") return 0x61;
		else if (text == "Num2") return 0x62;
		else if (text == "Num3") return 0x63;
		else if (text == "Num4") return 0x64;
		else if (text == "Num5") return 0x65;
		else if (text == "Num6") return 0x66;
		else if (text == "Num7") return 0x67;
		else if (text == "Num8") return 0x68;
		else if (text == "Num9") return 0x69;
		else if (text == "`") return 0xC0;
		else if (text == "/") return 0xBF;
		else if (text == ".") return 0xBE;
		else if (text == ",") return 0xBC;
		else if (text == "'") return 0xDE;
		else if (text == ";") return 0xBA;
		else if (text == "]") return 0xDD;
		else if (text == "[") return 0xDB;
		else if (text == "\\") return 0xDC;
		else if (text == "=") return 0xBB;
		else if (text == "-") return 0xBD;
		else if (text == "Num/") return 0x6F;
		else if (text == "Num*") return 0x6A;
		else if (text == "Num-") return 0x6D;
		else if (text == "Num+") return 0x6B;
		else if (text == "F1") return 0x70;
		else if (text == "F2") return 0x71;
		else if (text == "F3") return 0x72;
		else if (text == "F4") return 0x73;
		else if (text == "F5") return 0x74;
		else if (text == "F6") return 0x75;
		else if (text == "F7") return 0x76;
		else if (text == "F8") return 0x77;
		else if (text == "F9") return 0x78;
		else if (text == "F10") return 0x79;
		else if (text == "F11") return 0x7A;
		else if (text == "F12") return 0x7B;
		else if (text == "F13") return 0x7C;
		else if (text == "F14") return 0x7D;
		else if (text == "F15") return 0x7E;
		else if (text == "F16") return 0x7F;
		else if (text == "F17") return 0x80;
		else if (text == "F18") return 0x81;
		else if (text == "F19") return 0x82;
		else if (text == "F20") return 0x83;
		else if (text == "F21") return 0x84;
		else if (text == "F22") return 0x85;
		else if (text == "F23") return 0x86;
		else if (text == "F24") return 0x87;
		else if (text == "Escape") return 0x1B;
		else if (text == "Back\nSpace") return 0x08;
		else if (text == "Tab") return 0x09;
		else if (text == "Caps\nLock") return 0x14;
		else if (text == "Enter") return 0x0D;
		else if (text == "Left\nShift") return 0xA0;
		else if (text == "Right\nShift") return 0xA1;
		else if (text == "Left\nCtrl") return 0xA2;
		else if (text == "Windows") return 0x5B;
		else if (text == "Left\nAlt") return 0xA4;
		else if (text == "Space") return 0x20;
		else if (text == "Right\nAlt") return 0xA5;
		else if (text == "Right\nCtrl") return 0xA3;
		else if (text == "Print\nScreen") return 0x2C;
		else if (text == "Insert") return 0x2D;
		else if (text == "Home") return 0x24;
		else if (text == "Page Up") return 0x21;
		else if (text == "Delete") return 0x2E;
		else if (text == "End") return 0x23;
		else if (text == "Page\nDown") return 0x22;
		else if (text == "Right\nArrow") return 0x27;
		else if (text == "Up\nArrow") return 0x26;
		else if (text == "Left\nArrow") return 0x25;
		else if (text == "Down\nArrow") return 0x28;
		else if (text == "Volume\nUp") return 0xAF;
		else if (text == "Volume\nDown") return 0xAE;
		else if (text == "Volume\nMute") return 0xAD;
		else if (text == "Media\nNext\nTrack") return 0xB0;
		else if (text == "Media\nPrev\nTrack") return 0xB1;
		else if (text == "Media\nStop") return 0xB2;
		else if (text == "Toggle\nMedia") return 0xB3;
		else if (text == "Context\nMenu") return 0x5D;
		else if (text == "EREOF") return 0xF9;
		else if (text == "End\nCurrent\nTask") return 0xFD;
		else if (text == "Kana") return 0x15;
		else if (text == "Kanji") return 0x19;
		else if (text == "Non\nConvert") return 0x1D;
		else return -1;
	}
void Converter::s2virtual2(std::string text, VirtualKeycode& vk) {
		if (text == "Mode\nChange") vk = 0x1F;
		else if (text == "Browser\nHome") vk = 0xAC;
		else if (text == "Browser\nRefresh") vk = 0xA8;
		else if (text == "Jisho") vk = 0x92;
		else if (text == "Num.") vk = 0x6E;
	}
std::string Converter::rawCodeToString(RawKey stroke) {
		std::string toReturn;
		switch (stroke.code) {
		case 30: { toReturn = "A"; } break;
		case 48: { toReturn = "B"; } break;
		case 46: { toReturn = "C"; } break;
		case 32: { toReturn = "D"; } break;
		case 18: { toReturn = "E"; } break;
		case 33: { toReturn = "F"; } break;
		case 34: { toReturn = "G"; } break;
		case 35: { toReturn = "H"; } break;
		case 23: { toReturn = "I"; } break;
		case 36: { toReturn = "J"; } break;
		case 37: { toReturn = "K"; } break;
		case 38: { toReturn = "L"; } break;
		case 50: { toReturn = "M"; } break;
		case 49: { toReturn = "N"; } break;
		case 24: { toReturn = "O"; } break;
		case 25: { toReturn = "P"; } break;
		case 16: { toReturn = "Q"; } break;
		case 19: { toReturn = "R"; } break;
		case 31: { toReturn = "S"; } break;
		case 20: { toReturn = "T"; } break;
		case 22: { toReturn = "U"; } break;
		case 47: { toReturn = "V"; } break;
		case 17: { toReturn = "W"; } break;
		case 45: { toReturn = "X"; } break;
		case 21: { toReturn = "Y"; } break;
		case 44: { toReturn = "Z"; } break;
		case 11: { toReturn = "0"; } break;
		case 2: { toReturn = "1"; } break;
		case 3: { toReturn = "2"; } break;
		case 4: { toReturn = "3"; } break;
		case 5: { toReturn = "4"; } break;
		case 6: { toReturn = "5"; } break;
		case 7: { toReturn = "6"; } break;
		case 8: { toReturn = "7"; } break;
		case 9: { toReturn = "8";  } break;
		case 10: { toReturn = "9"; } break;
		case 82: {
			if (stroke.state == 0) toReturn = "Num0";
			else if (stroke.state == 2) toReturn = "Insert";
		} break;
		case 79: {
			if (stroke.state == 0) toReturn = "Num1";
			else if (stroke.state == 2) toReturn = "End";
		} break;
		case 80: {
			if (stroke.state == 0) toReturn = "Num2";
			else if (stroke.state == 2) toReturn = "Down\nArrow";
		} break;
		case 81: {
			if (stroke.state == 0) toReturn = "Num3";
			else if (stroke.state == 2) toReturn = "Page\nDown";
		} break;
		case 75: {
			if (stroke.state == 0) toReturn = "Num4";
			else if (stroke.state == 2) toReturn = "Left\nArrow";
		} break;
		case 76: { toReturn = "Num5"; } break;
		case 77: {
			if (stroke.state == 0) toReturn = "Num6";
			else if (stroke.state == 2) toReturn = "Right\nArrow";
		} break;
		case 71: {
			if (stroke.state == 0) toReturn = "Num7";
			else if (stroke.state == 2) toReturn = "Home";
		} break;
		case 72: {
			if (stroke.state == 0) toReturn = "Num8";
			else if (stroke.state == 2) toReturn = "Up\nArrow";
		} break;
		case 73: {
			if (stroke.state == 0) toReturn = "Num9";
			else if (stroke.state == 2) toReturn = "Page Up";
		} break;
		case 41: { toReturn = "`"; } break;
		case 52: { toReturn = "."; } break;
		case 51: { toReturn = ","; } break;
		case 40: { toReturn = "'"; } break;
		case 39: { toReturn = ";"; } break;
		case 27: { toReturn = "]"; } break;
		case 26: { toReturn = "["; } break;
		case 43: { toReturn = "\\"; } break;
		case 13: { toReturn = "="; } break;
		case 12: { toReturn = "-"; } break;
		case 53: {
			if (stroke.state == 0) toReturn = "/";
			else if (stroke.state == 2) toReturn = "Num/";
		} break;
		case 55: { toReturn = "Num*"; } break;
		case 74: { toReturn = "Num-"; } break;
		case 78: { toReturn = "Num+"; } break;
		case 59: { toReturn = "F1"; } break;
		case 60: { toReturn = "F2"; } break;
		case 61: { toReturn = "F3"; } break;
		case 62: { toReturn = "F4"; } break;
		case 63: { toReturn = "F5"; } break;
		case 64: { toReturn = "F6"; } break;
		case 65: { toReturn = "F7"; } break;
		case 66: { toReturn = "F8"; } break;
		case 67: { toReturn = "F9"; } break;
		case 68: { toReturn = "F10"; } break;
		case 87: { toReturn = "F11"; } break;
		case 88: { toReturn = "F12"; } break;
		case 1: { toReturn = "Escape"; } break;
		case 14: { toReturn = "Back\nSpace"; } break;
		case 15: { toReturn = "Tab"; } break;
		case 58: { toReturn = "Caps\nLock"; } break;
		case 28: { toReturn = "Enter"; } break;
		case 42: { toReturn = "Left\nShift"; } break;
		case 54: { toReturn = "Right\nShift"; } break;
		case 29: {
			if (stroke.state == 0) toReturn = "Left\nCtrl";
			else if (stroke.state == 2) toReturn = "Right\nCtrl";
		} break;
		case 91: {
			if (stroke.state = 2) toReturn = "Windows";
		} break;
		case 56: {
			if (stroke.state == 0) toReturn = "Left\nAlt";
			else if (stroke.state = 2) toReturn = "Right\nAlt";
		} break;
		case 57: { toReturn = "Space"; } break;
		case 83: { if (stroke.state == 0) toReturn = "Num."; if (stroke.state == 2) toReturn = "Delete"; } break;
		case 93: { if (stroke.state == 2) toReturn = "Context\nMenu"; } break;
		default: { toReturn = ""; }
		}

		return toReturn;
	}
VirtualKeycode Converter::stringToVirtual(std::string text) {
		VirtualKeycode toReturn = s2virtual1(text);
		s2virtual2(text, toReturn);
		return toReturn;
	}
VirtualKeycode Converter::rawCodeToVirtual(RawKey stroke) {
		return stringToVirtual(rawCodeToString(stroke));
	}
RawKey Converter::virtualCodeToRaw(VirtualKeycode vk) {
		return stringToRaw(virtualCodeToString(vk));
	}