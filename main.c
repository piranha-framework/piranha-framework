#include <stdio.h>
#include <curl/curl.h>
#include <stdlib.h>
#include "config.h" // This header file containing the info about configuration of the framework
#include "server-container/tcp.h"


int main(void) {
	char* buffer = (char*)malloc(sizeof(char)*1024);
	if (getSocket() == TCP_SUCCESS) {
		printf("Socket create success fully\n");
	}
	   char *hello =
"HTTP/1.1 200 OK\n"
"Date: Thu, 19 Feb 2009 12:27:04 GMT\n"
"Server: Piranha-Embedded-Server/2.2.3\n"
"Last-Modified: Wed, 18 Jun 2003 16:05:58 GMT\n"
"ETag: \"56d-9989200-1132c580\"\n"
"Content-Type: text/html\n"
"Content-Length: 11\n"
"Accept-Ranges: bytes\n"
"Connection: keep-alive\n"
"\n"
"Hello world";
	connect_tcp(port);
	printf("This is first ");
	read_tcp (buffer);
	send_tcp(hello);
	

	while(1) {

	}

	return 0;
}
