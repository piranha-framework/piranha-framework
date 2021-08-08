#pragma once


#include <stdio.h>
#include <stdlib.h>

#include "http.hpp"
#include "tcp.hpp"
#include "../config.hpp"

namespace piranha {
    class listener {
        public:
            void start_listen(void);
            void stop_listen(void);
    };
}
