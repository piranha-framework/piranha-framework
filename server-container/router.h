#pragma once


struct routeContainer {
	char* pattern;
	void (*func)(); // accepting a call back function
};



char* get_request_param();


void beginRouting(void); // This function mainly responsible for all kind of routing in the piranha framework