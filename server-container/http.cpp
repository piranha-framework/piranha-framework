#include "http.hpp"
#include "func.hpp"
#include "tcp.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

namespace piranha {
	// return HTTP_GET if the request header contain the GET request
	int http::http_get(char* buffer) {
		char* ret;
		char* result;
		ret = piranha::strupr(buffer); // converting the string into upper case 
		result = strstr(buffer,"GET");


		if (result != NULL) return HTTP_GET;
		else return HTTP_ERROR;
	}

	int http::http_post(char* buffer) {
		char* ret; 
		char* result;

		ret = piranha::strupr(buffer);
		result = strstr(buffer, "POST");
		if (result != NULL) return HTTP_POST;
		else return HTTP_ERROR;
	}

	int http::http_put(char* buffer) {
		char* ret;
		char* result;

		ret = piranha::strupr(buffer);
		result = strstr(buffer, "PUT");
		if (result != NULL) return HTTP_PUT;
		else return HTTP_ERROR;
	}

	int http::http_delete(char* buffer) {
		char* ret;
		char* result;

		ret = piranha::strupr(buffer);
		result = strstr(buffer, "DELETE");
		if (result != NULL) return HTTP_DELETE;
		else return HTTP_ERROR;
	}

	int http::send_http_response(Response res) {
		// This function is responsible for response any http response
		return 0;
	}

	int http::send_http_request (Request req) {
		// extract request info from url and provide the data to the user.
		Request reqObj;
		return 0;
	}

}