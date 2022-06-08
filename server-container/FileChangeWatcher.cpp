/**
 * Author : Md.Masud karim
 * email : msmasud578@gmail.com
 * Description: This script is responsible for observe the changes of any file in the project source tree.
 * */
#include "FileChangeWatcher.hpp"

#include <sys/inotify.h>
#include <errno.h>

namespace piranha {
    FileChangeWatcher::FileChangeWatcher() {
	inotify_instance_code = inotify_init();
    }

    bool FileChangeWatcher::isFileChanged() {

    }

    FileChangeWatcher::~FileChangeWatcher() {
        
    }
    
}
