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
	else return HTTP_ERROR;
}

int http_post(char* buffer) {
	char ret,result;

	ret = strupr(buffer);
	result = strstr(buffer, "POST");
	if (result != NULL) return HTTP_POST;
	else return HTTP_ERROR;
}

int http_put(char* buffer) {
	char* ret, result;

	ret = strupr(buffer);
	result = strstr(buffer, "PUT");
	if (result != NULL) return HTTP_PUT;
	else return HTTP_ERROR;
}

int http_delete(char* buffer) {
	char* ret, result;

	ret = strupr(buffer);
	result = strstr(buffer, "DELETE");
	if (result != NULL) return HTTP_DELETE;
	else return HTTP_ERROR;
}