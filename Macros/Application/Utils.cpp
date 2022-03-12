#include "Utils.h"
#include "FileManager.h"
#include "MacroApp.h"
#include "json.hpp"
#include <curl/curl.h>
#include <iostream>

extern bool darkMode;
extern bool openOnStartup;
extern FileManager fileManager;
extern MacroApp* app;
extern std::string APP_VERSION;
using json = nlohmann::json;

void BackendUtils::findAndReplaceAll(std::string& data, std::string toSearch, std::string replaceStr) {

	size_t pos = data.find(toSearch);

	while (pos != std::string::npos) {
		// Replace this occurrence of Sub String
		data.replace(pos, toSearch.size(), replaceStr);
		// Get the next occurrence from the current position
		pos = data.find(toSearch, pos + replaceStr.size());
	}
}

std::string BackendUtils::getExePath() {
	WCHAR ownPth[MAX_PATH];
	HMODULE hModule = GetModuleHandle(NULL);
	if (hModule != NULL) {
		GetModuleFileName(hModule, ownPth, (sizeof(ownPth)));
		std::wstring s = std::wstring(ownPth);
		return std::string(s.begin(), s.end());
	}
	else {
		openOnStartup = false;
		fileManager.updateConfig();
		app->die("Module handle is NULL. Could not open on startup. Please restart the app.");
		return NULL;
	}
}

void BackendUtils::toggleOpenOnStartup() {
	if (openOnStartup) {
		CoInitialize(NULL);
		IShellLink* pShellLink = NULL;
		HRESULT hres;
		hres = CoCreateInstance(CLSID_ShellLink, NULL, CLSCTX_ALL, IID_IShellLink, (void**)&pShellLink);
		if (SUCCEEDED(hres)) {
			std::string exepathstring = getExePath();
			std::wstring stmp = Converter::s2ws(exepathstring);
			LPCWSTR exepath = stmp.c_str();
			pShellLink->SetPath(exepath);
			pShellLink->SetDescription(L"Breakfast Macros");
			pShellLink->SetIconLocation(exepath, 0);
			IPersistFile *pPersistFile;
			hres = pShellLink->QueryInterface(IID_IPersistFile, (void**)&pPersistFile);
			if (SUCCEEDED(hres)) {
				char* appdata = getenv("APPDATA");
				std::string shortcutpath = appdata;
				shortcutpath += "\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\macros.lnk";

				hres = pPersistFile->Save(Converter::s2ws(shortcutpath).c_str(), TRUE);
				pPersistFile->Release();
			}
			else {
				openOnStartup = false;
				fileManager.updateConfig();
				app->die("ERROR: Could not enable open on startup(2). Please restart the app.");
			}
			pShellLink->Release();
		}
		else {
			openOnStartup = false;
			fileManager.updateConfig();
			app->die("ERROR: Could not enable open onstartup(1). Please restart the app.");
		}
	}
	else {
		char* appdata = getenv("APPDATA");
		std::string shortcutpath = appdata;
		shortcutpath += "\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\macros.lnk";
		std::filesystem::remove(shortcutpath);
	}
}

size_t writeFunction(void* ptr, size_t size, size_t nmemb, std::string* data) {
	data->append((char*)ptr, size * nmemb);
	return size * nmemb;
}

void BackendUtils::checkForUpdates() {
	auto curl = curl_easy_init();
	json jsonResponse;
	if (curl) {
		std::string response_string;
		std::string header_string;
		long response_code;

		curl_easy_setopt(curl, CURLOPT_URL, "https://api.github.com/repos/Breakfast-Galaxy-Studios/Breakfast-Macros/releases/latest");
		curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
		curl_easy_setopt(curl, CURLOPT_USERPWD, "user:pass");
		curl_easy_setopt(curl, CURLOPT_USERAGENT, "curl/7.42.0");
		curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
		curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);

		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
		curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header_string);


		curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);;

		curl_easy_perform(curl);
		curl_easy_cleanup(curl);
		curl = NULL;

		if (response_code >= 400) {
			std::string message = "The app could not check for updates.\nHttp response code is: ";
			message += std::to_string(response_code);
			std::wstring temp = std::wstring(message.begin(), message.end());

			MessageBox(NULL, temp.c_str(), L"Update Error", MB_OK);
			return;
		}

		jsonResponse = json::parse(response_string);
		std::string latestVersion = jsonResponse["tag_name"];
		BackendUtils::findAndReplaceAll(latestVersion, "\"", "");

		if (latestVersion != APP_VERSION) {
			int msgboxID = MessageBox(NULL, L"A new version is availiable on the github.\nWould you like to get the new version?\nGetting a new version will close the app.", L"New Update Available", MB_YESNO);
			switch (msgboxID)
			{
			case IDYES:
				ShellExecute(NULL, L"open", L"https://github.com/Breakfast-Galaxy-Studios/Breakfast-Macros/releases", NULL, NULL, SW_SHOWNORMAL);
				exit(666);
				break;
			}
		}

	}
	else {
		MessageBox(NULL, L"The app could not check for updates.\nCurl failed to init.", L"Update Error", MB_OK);
	}
}