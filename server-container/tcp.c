#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>

#include "tcp.h" // tcp header file

int new_socket;
struct sockaddr_in address;
struct sock sock_beta;
struct sock *sock_fd = &sock_beta;




void read_tcp(char* buffer) {
	int readVal;

	readVal = read(new_socket,buffer, 1024);
	//printf("%s\n",buffer);
}

void send_tcp(char* sendableData) {
	send(new_socket,sendableData,strlen(sendableData),0);
	//close(new_socket);
	close(new_socket);
}

int getSocket() {
	sock_fd->fd = socket(AF_INET,SOCK_STREAM,0); // getting the socket 
	if (sock_fd->fd == 0) {
		printf("Socket failed\n");
		return TCP_ERROR;
	}
	return TCP_SUCCESS;
}

void accept_tcp() {
int addrlen = sizeof(address);
	new_socket = accept(sock_fd->fd,(struct sockaddr*)&address, (socklen_t*)&addrlen);
	if (new_socket < 0) {
		perror ("Accept");
		exit(EXIT_FAILURE);
	}

}
void connect_tcp(int port) {
	int addrlen = sizeof(address);
	int opt = 1;
	char* buffer = (char*) malloc(sizeof(char)* 2043);

	if (setsockopt (sock_fd->fd,SOL_SOCKET,SO_REUSEADDR | SO_REUSEPORT,&opt,sizeof(opt))) {
		perror ("setsockopt");
		exit(EXIT_FAILURE);
	}

	

	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;

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

