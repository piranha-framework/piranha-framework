#pragma once

#define HTTP_GET 100
#define HTT_POST 200
#define HTTP_ERROR -100
#define HTTP_PUT 300
#define HTTP_DELETE 400

int http_get(char *buffer);
int http_post(char* buffer);
int http_put(char* buffer);
int http_delete(char* buffer);