#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if(argc < 2) {
		fprintf(stderr,"%s: error input\n", argv[0]);
		return 1;
	} else {
		sleep(atoi(argv[1]));
	}
	return 0;
}