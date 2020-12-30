#include "http.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HTTP_GET 100
#define HTT_POST 200
#define HTTP_ERROR -100

int http_get(char* buffer) {
	strupr(buffer);
	char* ret;
	ret = strstr(buffer, "GET");

	if (ret != NULL) return HTTP_GET;
	else HTTP_ERROR;
}