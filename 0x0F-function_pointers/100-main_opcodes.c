#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int n) {
	char (*p)(int) = (char *) print_opcodes;
	int i;
	for (i = 0; i < n; i++) {
		printf("%02x", p[i] & 0xff);
	}
	printf("\n");
}

int main(int argc, char **argv) {
	int n;
	if (argc != 2) {
		printf("Error\n");
		return 1;
	}

	n = atoi(argv[1]);

	if (n <= 0) {
		printf("Error\n");
		return 2;
	}
	print_opcodes(n);
	return 0;
}

