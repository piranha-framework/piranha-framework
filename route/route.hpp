#pragma once

#include <iostream>
//#include "route.h"
#include <string.h>
#include "../server-container/router.hpp"

// importing controller func
#include "../controller/helloController.h"

struct routeContainer<std::string> getRoute() {

	struct helloController_hello<std::string> helloCont_hello = getHelloController_hello();

	struct routeContainer<std::string> route;
	std::string pattern = "/home";
	//strcpy(route.controller,"homeController"); // We don't need to provide any kind of controller name in this framework
	//route.func = (void*) helloCont_hello.hello; // assiging the function for router algorithm
	//strcpy(route.pattern,"home/");
	route.func = helloCont_hello.hello;
	route.pattern = pattern;

	return route;
}