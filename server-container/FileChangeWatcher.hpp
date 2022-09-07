#pragma once

#include "file_navigator.hpp"
#include <iostream>

namespace piranha {
    class FileChangeWatcher {
        private:
            int inotify_instance_code; // file descriptor for wathable file or deirective
            int watch_descriptor;
        public:
            FileChangeWatcher();
            bool isFileChanged();
            ~FileChangeWatcher();
    };
}
