#include "logger.h"
#include <stdio.h>

int main(void) {
	debug("This is debug msg\n");
	warning("This is warning msg\n");
	error("This is error msg\n");

	return 0;
}
