/**
	@Author : Masud karim
*/

#include "../route/route.h"
#include "http.h"
#include "logger.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
	@param struct routeContainer route_container
	@description: Creates a new routeNode
*/

struct routeContainer beginRouting(char* buffer) {
	debug("Starting the server....\n");

	struct routeContainer rContainer = getRoute();
	
	// This routing the component is main routing component

	return rContainer;
}
