#pragma once


struct routeContainer {
	char* pattern;
	char* controller;
	char* func;
};

struct elementSize {int size;};
struct elementSize element_size;

struct routeContainer* container;

void addRouteToArray(struct routeContainer* container);
void elementSize(int size);