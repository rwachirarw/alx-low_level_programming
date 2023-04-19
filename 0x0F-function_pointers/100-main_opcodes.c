#include <stdio.h>

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

/**
  * main - program start
  * @argc: argument count
  * @argv: argument vector
  * Return: integer
  */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)main, n);

	return (0);
}
