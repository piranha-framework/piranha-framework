#pragma once

struct helloController {

	char* (*hello)();
};
char* hello() {
	return "Hello world";
}

struct helloController helloCont;
helloCont.hello = &hello;