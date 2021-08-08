/**
	@Author : Masud karim
*/

#include "../route/route.hpp"
#include "http.hpp"
#include "logger.hpp"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


namespace piranha {
	piranha::logger * logger_obj = new piranha::logger();
	/**
		@param struct routeContainer route_container
		@description: Creates a new routeNode
	*/

	struct routeContainer<std::string> router::beginRouting(char* buffer) {
		logger_obj->debug("Starting the server....\n");

		struct routeContainer<std::string> rContainer = getRoute();
		
		// This routing the component is main routing component

		return rContainer;
	}

}