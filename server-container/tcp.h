#pragma once

#define TCP_ERROR -10
#define TCP_SUCCESS 10

struct sock {
	int fd;
};

int getSocket();
void connect_tcp();
void read_tcp(char* buffer);
void send_tcp(char* sendableData);