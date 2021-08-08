#pragma once

#include <stdio.h>

namespace piranha {
    class logger {
        public:
            void debug(const char* msg); // must be printed with white color
            void error(const char* err_msg); // must be printed with red color
            void warning(const char* warning_msg); // must be printed with yellow color

    };
}
