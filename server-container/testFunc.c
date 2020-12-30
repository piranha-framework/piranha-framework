#include <stdio.h>

#include "func.h"

int main(void) {
	char* buffer = "hello world this my First string";

	strupr(buffer);
	printf("%s\n",buffer);
}
