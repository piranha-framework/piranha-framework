#pragma once

#define HTTP_GET 100
#define HTT_POST 200
#define HTTP_ERROR -100
#define HTTP_PUT 300
#define HTTP_DELETE 400

int http_get(char *buffer);
void http_post();
void http_put();
void http_delete();