#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/*atoi function library*/
/**
 * main - adds positive numbers.
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;
	char *endptr;

	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
