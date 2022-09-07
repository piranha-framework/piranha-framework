#include <iostream>

// Project header files including submodules and src headers
#include <listener.hpp>
#include <template_parser.hpp>
#include <spdlog/spdlog.h>
#include <file_navigator.hpp>
#include <filesystem>

namespace fs = std::filesystem;

#include "config.hpp"

int main(void) {
//	std::string root_path_dir = root_path_str;
//	piranha::FileNavigator *navigator_obj = new piranha::FileNavigator(root_path_dir);
//	delete navigator_obj;

	piranha::listener * listener_obj = new piranha::listener();
	spdlog::info("Hello world this is logging from spdlog");
	listener_obj->start_listen();
}
