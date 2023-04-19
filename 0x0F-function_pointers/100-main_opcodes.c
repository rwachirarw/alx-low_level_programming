#include <stdio.h>
#include <stdlib.h>

/**
 * main - program start
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
void print_opcodes(char *addr, int n);

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, n);

	return (0);
}

/**
 * print_opcodes - prints opcodes
 * @addr: address
 * @n: integer
 * Return: void
 */

void print_opcodes(char *addr, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%02hhx ", addr[i]);
	printf("\n");
}
