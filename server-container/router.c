/**
	@Author : Masud karim
*/

#include "../route/route.h"
#include "http.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
	@param struct routeContainer route_container
	@description: Creates a new routeNode
*/
struct routeNode* createNode(struct routeContainer route_container) {
	struct routeNode *node = (struct routeNode*)malloc(sizeof(struct routeNode));
	node->route_container = route_container;
	node->next = NULL;

	return node;
}

void insert(struct routeNode** container,struct routeContainer route) {
	struct routeNode* tempContainer = *container;
	while(tempContainer != NULL) {
		tempContainer = tempContainer->next;
	}
	tempContainer->route_container = route;
	tempContainer->next = NULL;
	*container = tempContainer;
}

void addRouteToList(struct routeContainer route) {
	if (container == NULL) {
		container = createNode(route); // insert first element if the container is empty
	} else {
		insert(&container,route);
	}

}