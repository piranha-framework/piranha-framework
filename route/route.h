#pragma once

#include "route.h"
#include <string.h>
#include "../server-container/router.h"

// importing controller func
#include "../controller/homeController.h"


struct helloController helloCont = getHelloController();

struct routeContainer route;
strcpy(route.controller,"homeController");
route.func = helloCont.hello; // assiging the function for router algorithm
strcpy(route.pattern,"home/");

addRotueToList(route);