#include <stdio.h>

void print_opcodes(char *addr, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%02hhx ", addr[i]);
	printf("\n");
}

int main(int argc, char **argv)
{
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

	print_opcodes((char *)main, n);

	return 0;
}
