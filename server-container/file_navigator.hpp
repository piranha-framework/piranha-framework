#pragma once

#include <iostream>

#include "FileChangeWatcher.hpp"

namespace piranha {
	class FileNavigator{
		private:
			std::string root_path_dir;
			piranha::FileChangeWatcher *watcher = new piranha::FileChangeWatcher();
		public:
			FileNavigator(std::string root_path_dir);
			// FileNavigator() = delete;
			~FileNavigator();
	};
}
