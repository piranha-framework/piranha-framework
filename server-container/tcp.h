#pragma once

#define TCP_ERROR -10
#define TCP_SUCCESS 10

struct sock {
	int fd;
};

int getSocket();