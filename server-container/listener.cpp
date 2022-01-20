/* Author : Md.Masud karim
 * Email: msmasud578@gmail.com
 * This script is a server listener. Which listen to the server.
 * */

#include <iostream>

#include "listener.hpp"
#include "router.hpp"
#include "logger.hpp"
#include "template_parser.hpp"

#include <boost/format.hpp>


namespace piranha {
	
void listener::start_listen() {
	piranha::tcp * tcp_obj = new piranha::tcp();
	piranha::logger * logger_obj = new piranha::logger();
	piranha::router * router_obj = new piranha::router();
	// This function is responsible to listen to a client Note: I might make this server concurrent in later
	// version but right it's just a single threaded server who can handle one clinet at a time 
	char* buffer = (char*)malloc(sizeof(char)*1024);
	piranha::template_parser * template_parser = new piranha::template_parser();

	if (tcp_obj->getSocket() == TCP_SUCCESS) {
		logger_obj->debug("Socket create success fully\n");
	}

	std::string path = "/home/unroot/Desktop/piranha-framework/template/index.html";
	// char* template_char = const_cast<char*>(template_parser->get_template(path).c_str());

	// std::cout << template_char<<std::endl;
	 

	// const char *hello =
	// 	"HTTP/1.1 200 OK\n"
	// 	"Date: Thu, 19 Feb 2009 12:27:04 GMT\n"
	// 	"Server: Piranha-Embedded-Server/2.2.3\n"
	// 	"Last-Modified: Wed, 18 Jun 2003 16:05:58 GMT\n"
	// 	"ETag: \"56d-9989200-1132c580\"\n"
	// 	"Content-Type: text/html\n"
	// 	"Content-Length: 440\n"
	// 	"Accept-Ranges: bytes\n"
	// 	"Connection: keep-alive\n"
	// 	"\n"
	// 	"<html><head><link rel = \"icon\" type = \'image\' href = \'https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fmedia.istockphoto.com%2Fvectors%2Ffurious-piranha-sport-vector-icon-concept-isolated-on-white-vector-id670567906%3Fk%3D6%26m%3D670567906%26s%3D612x612%26w%3D0%26h%3D9nIGEVR6qtmvAMn75wTbpXNlJdWJYG31vsZ_xLZjdyw%3D&f=1&nofb=1\'><title>Piranha server</title></head><body><h1>Hello world this is my testing server</h1></body></html>";

		// boost::format fmt = boost::format("Hello %1% you are age is %2%")% "masud" % "43";
		// std::cout << fmt;
		
		std::string temp = template_parser->get_template(path);
		std::cout <<temp<<std::endl;
		boost::format data = template_parser->get_formated_template_string(temp);

		char* hello = const_cast<char*> (data.str().c_str());
	// Instance of http
	piranha::http *http_obj = new piranha::http();

	tcp_obj->connect_tcp(port);
	while(1) {
		tcp_obj->accept_tcp();
		tcp_obj->read_tcp (buffer);
		printf("Printing the buffer: %s",buffer);

		struct routeContainer<std::string> routerResponse = router_obj->beginRouting(buffer); // feeding the incoming data buffer to the router; This should return the function that has to execute
		// char* ret = (char*) routerResponse.func();
		std::string ret = routerResponse.func();

		if (http_obj->http_get(buffer) == HTTP_GET) {
			logger_obj->debug("\nConnection response is get request\n");
		
		} else {
		
			logger_obj->debug("\nConnect response is post request\n");
		
		}
		// tcp_obj->send_tcp((char*)ret.c_str());
		tcp_obj->send_tcp((char*)data.str().c_str());
	}	

}

void listener::stop_listen(void) {
	// this function reponsible of terminating the server but it's not going to be in use often time.

}
}