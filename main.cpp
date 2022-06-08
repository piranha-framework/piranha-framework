#include <iostream>

// Project header files including submodules and src headers
#include <listener.hpp>
#include <template_parser.hpp>
#include <spdlog/spdlog.h>

int main(void) {
	piranha::listener * listener_obj = new piranha::listener();
	spdlog::info("Hello world this is logging from spdlog");
	listener_obj->start_listen();
}
