#include "func.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* strupr(char* buffer) {
	int buffer_len = strlen(buffer);
	char* temp = (char*)malloc(sizeof(char)*strlen(buffer));

	for (int i = 0; i < buffer_len; i++) {
		char ch = buffer[i];

		if (buffer[i] < 97) {
			temp[i] = ch;
		} else if (buffer[i] == 32) { // ignoring the space
			continue;
		} else if (buffer[i] >= 97) {
			temp[i] = (char)ch - 32;
		}

	}
	return temp;

}