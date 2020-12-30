#include "func.h"
#include <string.h>
#include <stdio.h>

void strupr(char* buffer) {
	int buffer_len = strlen(buffer);

	for (int i = 0; i < buffer_len; i++) {
		char ch = buffer[i];

		if (buffer[i] < 97) {
			continue;
		} else if (buffer[i] == 32) { // ignoring the space
			continue;
		} else if (buffer[i] >= 97) {
			buffer[i] = (char)ch - 32;
		}

	}

}