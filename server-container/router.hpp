#pragma once
#include <iostream>

// struct routeContainer {
// 	char* pattern;
// 	void* (*func)(); // accepting a call back function
// };

template<class T>
struct routeContainer {
	std::string pattern;
	T (*func)();
};

namespace piranha {
	class router{
		public:
			char* get_request_param();
			struct routeContainer<std::string> beginRouting(char* buffer); // This function mainly responsible for all kind of routing in the piranha framework
	};
}