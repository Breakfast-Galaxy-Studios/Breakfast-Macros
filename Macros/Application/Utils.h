#pragma once
#include <string>
#include <iostream>

namespace BackendUtils {

    void findAndReplaceAll(std::string& data, std::string toSearch, std::string replaceStr);
	std::string getExePath();
	void toggleOpenOnStartup();
	void checkForUpdates();
	template<typename T>
	inline bool isIntegral(const T& value) {
		return std::is_integral_v<T>;
	}
	template<typename T>
	inline bool isIntegral() {
		return std::is_integral_v<T>;
	}
}

namespace Logger {

	template<typename T>
	inline void print(const T& toPrint) {
		std::cout << toPrint;
	}

	template< typename FIRST, typename... REST >
	inline void print(const FIRST& first, const REST&... rest) {
		print(first);
		print(rest...);
		printf("\n----------\n");
	}
}
