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
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
