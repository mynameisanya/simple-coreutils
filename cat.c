#include <stdio.h>
#include <unistd.h>

void copy(FILE* input, FILE* output) {
	int chr;
	while ((chr = getc(input)) != EOF) {
		putc(chr, output);
	}
}

int main(int argc, char* argv[]) {
	int value = 0;
	if (argc == 1)
		copy(stdin, stdout);
	for (int i = 1; i < argc; i++) {
		FILE* f = fopen(argv[i], "r");
		copy(f, stdout);
		fclose(f);
	}
	return value;
}