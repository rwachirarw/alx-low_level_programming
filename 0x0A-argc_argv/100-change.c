#include <stdio.h>
#include <stdlib.h>

/**
 * main - rints the minimum number for change
 *@argc: number of arguments
 *@argv: strings
 *Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int count = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cents >= 25)
	{
		count += cents / 25;
		cents %= 25;
	}

	if (cents >= 10)
	{
		count += cents / 10;
		cents %= 10;
	}

	if (cents >= 5)
	{
		count += cents / 5;
		cents %= 5;
	}

	if (cents >= 2)
	{
		count += cents / 2;
		cents %= 2;
	}
	count += cents;
	printf("%d\n", count);
	return (0);
}
