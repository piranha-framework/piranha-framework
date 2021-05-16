#include "logger.h"
#include <stdio.h>

int main(void) {
	debug("Hello this is debug func\n");
	error("Hello this is error func\n");
	warning("Hello this is warning func\n");
}
