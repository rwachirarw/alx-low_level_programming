#include <stdio.h>
#include <stdlib.h>

/**
 * main - program start
 * @argc: argument count
 * @argv: argument vector
 * Return: multiplication of num1 and num2
 */

int main(int argc, char **argv)
{
	int num1, num2, i;
	unsigned long long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;


	printf("%llu\n", mul);

	return (0);
}
