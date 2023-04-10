#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main-program start
 *@argc: argument count
 *@argv: argument array
 *Return: interger
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
