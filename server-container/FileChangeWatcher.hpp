#pragma once

namespace piranha {
    class FileChangeWatcher {
        private:
		int inotify_instance_code; // file descriptor for wathable file or deirective
        public:
            FileChangeWatcher();
            bool isFileChanged();
            ~FileChangeWatcher();
    };
}
