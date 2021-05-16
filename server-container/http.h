#pragma once

#define HTTP_GET	100
#define HTTP_POST	200
#define HTTP_ERROR	-100
#define HTTP_PUT	300
#define HTTP_DELETE	400

// TODO: We have to make http request and response header machanism so that the request can be extract from and send towards the http protocol


/********************** User defined data types ***********************/
struct Response {
    char* buffer; // Sendable http/text contant
    int response_code;
    char* content_type; // mention the type of the content so that router can understand which type of data should the server return
    char* redirect; // This redirect will be null if any redirection is not take place
    int content_size;
    char* additional_headers;
};

struct Request {
    char* request_header;
    char** string_variable;
    int** int_variable;
};

typedef struct Response Response;
typedef struct Request Request;

/********************** Prototypes ***********************/

int http_get(char *buffer);
int http_post(char* buffer);
int http_put(char* buffer);
int http_delete(char* buffer);
int send_http_response(Response res);
int send_http_request(Request req);
