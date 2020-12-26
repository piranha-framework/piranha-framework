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
#include "tcp.h"
#include <netdb.h>
#include <unistd.h>

int getSocket() {
	sock.fd = socket(AF_INET,SOCK_STREAM,0); // getting the socket 

	if (sock.fd < 0) {
		return TCP_ERROR;
	} else {
		return TCP_SUCCESS;
	}
}
