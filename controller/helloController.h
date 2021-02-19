#pragma once

struct helloController_hello { // Syntax : controllerName_function_name

	char* (*hello)();
};
char* hello() {
	return "Hello world";
}

struct helloController_hello getHelloController_hello() {
	struct helloController_hello helloCont_hello;
	helloCont_hello.hello = &hello;

	return helloCont_hello;
}