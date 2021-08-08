#include "logger.hpp"

namespace piranha {
	void logger::debug(const char* msg) {
		printf("\033[32m--> Debug: %s",msg);
		printf("\033[0m");
	}

	void logger::error(const char* error_msg) {
		printf("\033[31m--> Error: %s",error_msg);
		printf("\033[0m");
	}

	void logger::warning(const char* warning_msg) {
		printf("\033[33m--> Warning: %s",warning_msg);
		printf("\033[0m");
	}

}