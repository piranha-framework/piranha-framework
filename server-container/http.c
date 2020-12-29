#include "http.h"
#include "tcp.h"

#include <stdio.h>
#include <stdlib.h>

void http_get() {
	char *buffer = (char*)malloc(sizeof(char)*1024);

	connect_tcp();
	accept_tcp();
	read_tcp(buffer);

	// we have to see if this response contain http get or post req

}