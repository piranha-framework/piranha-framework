#pragma once
#include <iostream>
#include <boost/format.hpp>

namespace piranha {
    class template_parser {
        public:
            std::string get_template(std::string file_name);
            boost::format get_formated_template_string(std::string template_string);

    };
}