#include <stdio.h>
#include <curl/curl.h>
#include <stdlib.h>
#include "config.h" // This header file containing the info about configuration of the framework
#include "server-container/tcp.h"


int main(void) {
	if (getSocket() == TCP_SUCCESS) {
		printf("Socket create success fully\n");
	}
	return 0;
}
