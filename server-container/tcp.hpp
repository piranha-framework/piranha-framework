#pragma once

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
#include <arpa/inet.h>

#define TCP_ERROR -10
#define TCP_SUCCESS 10

// int getSocket();
// void connect_tcp();
// void read_tcp(char* buffer);
// void send_tcp(char* sendableData);
// void accept_tcp();

namespace piranha {
	class tcp {
		private:
			struct sock {
				int fd;
			};
			int new_socket;
			struct sockaddr_in address;
			struct sock sock_beta;
			struct sock *sock_fd = &sock_beta;


		public:
			int getSocket();
			void connect_tcp(int port);
			void read_tcp(char* buffer);
			void send_tcp(char* sendableData);
			void accept_tcp();
	};
}