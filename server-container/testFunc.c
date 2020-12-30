#include <stdio.h>
#include <string.h>

#include "func.h"

int main(int argc, char** argv) {
	char* buffer = "hello world this my First string";
	char* res;

	res = strupr(buffer);
	printf("%s\n",res);
	return 0;
}
