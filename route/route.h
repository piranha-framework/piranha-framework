#pragma once

#include "route.h"
#include <string.h>
#include "../server-container/router.h"

// importing controller func
#include "../controller/homeController.h"


struct helloController_hello helloCont_hello = getHelloController_hello();

struct routeContainer route;
//strcpy(route.controller,"homeController"); // We don't need to provide any kind of controller name in this framework
route.func = helloCont_hello.hello; // assiging the function for router algorithm
strcpy(route.pattern,"home/");

addRotueToList(route);