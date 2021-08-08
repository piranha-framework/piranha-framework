#pragma once
#include <iostream>

// struct helloController_hello { // Syntax : controllerName_function_name
// 	const char* (*hello)();
// };

template<class T>
struct helloController_hello {
	T (*hello)();
};
/*The controller function area*/

// const char* hello() {
// 	const char* return_state = "Hello world";
// 	return return_state;
// }

std::string hello() {
	std::string return_state = "hello worl";
	return return_state;
}

/* Sending the controller to the main server container */

struct helloController_hello<std::string> getHelloController_hello() {
	struct helloController_hello<std::string> helloCont_hello;
	helloCont_hello.hello = &hello;

	return helloCont_hello;
}