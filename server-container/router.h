#pragma once


struct routeContainer {
	char* pattern;
	void* (*func)(); // accepting a call back function
};



char* get_request_param();


struct routeContainer beginRouting(char* buffer); // This function mainly responsible for all kind of routing in the piranha framework