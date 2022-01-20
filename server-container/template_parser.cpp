#include "template_parser.hpp"

#include <iostream>
#include <fstream>
#include <boost/format.hpp>

namespace piranha {
    std::string template_parser::get_template(std::string file_name) {
        std::ifstream reader_stream;
        reader_stream.open(file_name);
        std::string line = "";
        std::string temp = "";

        while (!reader_stream.eof()) {
            getline(reader_stream,line);
            std::cout << line<<std::endl;
            temp += "\n"+line;
        }
        reader_stream.close();

        return temp;
    }

    boost::format template_parser::get_formated_template_string(std::string template_string) {
        boost::format fmt = boost::format("HTTP/1.1 200 OK\n"
            "Date: Thu, 19 Feb 2009 12:27:04 GMT\n"
            "Server: Piranha-Embedded-Server/2.2.3\n"
            "Last-Modified: Wed, 18 Jun 2003 16:05:58 GMT\n"
            "ETag: \"56d-9989200-1132c580\"\n"
            "Content-Type: text/html\n"
            "Content-Length: %1%\n"
            "Accept-Ranges: bytes\n"
            "Connection: keep-alive\n"
            "\n""%2%")%template_string.size() %template_string;

            std::cout << fmt<<std::endl;
        return fmt;
		
    }
}