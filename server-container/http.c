#include "http.h"
#include "func.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int http_get(char* buffer) {
	char* ret;
	char* result;
	ret = strupr(buffer); // converting the string into upper case 
	result = strstr(buffer,"GET");


	if (result != NULL) return HTTP_GET;
	else HTTP_ERROR;
}