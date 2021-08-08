#include "tcp.hpp" // tcp header file
#include "../config.hpp"
#include "logger.hpp"

namespace piranha {

	void tcp::read_tcp(char* buffer) {
		int readVal;

		readVal = read(new_socket,buffer, 1024);
		//printf("%s\n",buffer);
	}

	void tcp::send_tcp(char* sendableData) {
		send(new_socket,sendableData,strlen(sendableData),0);
		//close(new_socket);
		close(new_socket);
	}

	int tcp::getSocket() {
		sock_fd->fd = socket(AF_INET,SOCK_STREAM,0); // getting the socket 
		if (sock_fd->fd == 0) {
			printf("Socket failed\n");
			return TCP_ERROR;
		}
		return TCP_SUCCESS;
	}

	void tcp::accept_tcp() {
		int addrlen = sizeof(address);
		new_socket = accept(sock_fd->fd,(struct sockaddr*)&address, (socklen_t*)&addrlen);
		if (new_socket < 0) {
			perror ("Accept");
			exit(EXIT_FAILURE);
		}

	}

	void tcp::connect_tcp(int port) {
		piranha::logger * logger_obj = new piranha::logger();

		int addrlen = sizeof(address);
		int opt = 1;
		char* buffer = (char*) malloc(sizeof(char)* 2043);

		if (setsockopt (sock_fd->fd,SOL_SOCKET,SO_REUSEADDR | SO_REUSEPORT,&opt,sizeof(opt))) {
			perror ("setsockopt");
			exit(EXIT_FAILURE);
		}

		

		address.sin_family = AF_INET;
		struct in_addr converted_url;
		int ok = inet_aton(ROUTE_URL,&converted_url); // changing from INADDR_ANY;
		if (ok == 1)
			address.sin_addr.s_addr = converted_url.s_addr;
		else 
			logger_obj->error("Sorry inet_aton() has some problem!!");

		address.sin_port = htons(port);
		printf("\nListining to port : %d",port);
		if( bind(sock_fd->fd,(struct sockaddr*)&address,sizeof(address)) < 0) {
			perror ("Bind");
			exit(EXIT_FAILURE);
		}
		if (listen(sock_fd->fd,3) < 0) {
			perror ("Listening");
			exit(EXIT_FAILURE);
		}
	}

}