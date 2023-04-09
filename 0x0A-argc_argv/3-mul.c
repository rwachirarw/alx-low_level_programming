#include <stdio.h>
#include <stdlib.h>

/**
 *main-program start
 *@argc: argument count
 *@argv: argument array
 *Return: interger
 */

int main(int argc, char *argv[])
{
	int mul = 1, i, x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
	x = strtol(argv[i], NULL, 10);
	mul = mul * x;
	}
	printf("%d\n", mul);
	return (0);
}
