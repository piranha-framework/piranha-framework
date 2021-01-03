#pragma once


struct routeContainer {
	char* pattern;
	char* controller;
	void (*func)(); // accepting a call back function
};

struct routeNode {
	struct routeContainer route_container;
	struct *Node next; // tail of the linked list
};

struct routeNode* container = NULL;

void elementSize(int size);


// Linked list operation
void createNode(struct routeContainer route_container);
void insert(struct routeNode** container,struct routeContainer route);

// main code section
void addRouteToList(struct routeContainer route);