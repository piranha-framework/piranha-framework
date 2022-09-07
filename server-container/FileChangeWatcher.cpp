/**
 * Author : Md.Masud karim
 * email : msmasud578@gmail.com
 * Description: This script is responsible for observe the changes of any file in the project source tree.
 *
 *
 * 🥵🥵 Warning : This script is not yet thread safe so use at your own risk 🥵
 * */
#include "FileChangeWatcher.hpp"

#include <sys/inotify.h>
#include <errno.h>

namespace piranha {
    FileChangeWatcher::FileChangeWatcher() {
	    inotify_instance_code = inotify_init();
//	watch_descriptor = inotify_add_watch(inotify_instance_code,NULL,IN_DELETE | IN_ACCESS | IN_MODIFY);
	// this->root_path = root_path;
    }

    bool FileChangeWatcher::isFileChanged() {
	    return NULL;
    }

    FileChangeWatcher::~FileChangeWatcher() {
    }
    
}
