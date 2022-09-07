#include "file_navigator.hpp"


namespace piranha {

	FileNavigator::FileNavigator(std::string root_path_dir) {

		this->root_path_dir = root_path_dir;
//		this->changeWatcher = new piranha::FileChangeWatcher(this->root_path_dir);
	}

	FileNavigator::~FileNavigator() {
		std::cout <<"Destructing the navigator"<<std::endl;
		// delete this->changeWatcher;
	}

}
