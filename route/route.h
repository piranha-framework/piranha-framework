#pragma once

#include "route.h"
#include <string.h>
#include "../server-container/router.h"

elementSize(10);// inserting 10 route pattern in router

struct routeContainer route;
strcpy(route.controller,"homeController");
strcpy(route.func,"index");
strcpy(route.pattern,"home/");

addRotueToArray(route);
