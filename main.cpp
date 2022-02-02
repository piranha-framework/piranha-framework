#include <listener.hpp>
#include <template_parser.hpp>

#include <iostream>

int main(void) {
	piranha::listener * listener_obj = new piranha::listener();
	// piranha::template_parser * parser = new piranha::template_parser();
	// std::string path = "template/index.html";
	// parser->get_template(path);
	listener_obj->start_listen();
}