#include <stdio.h>

/**
 *main-program start
 *@argc: argument count
 *@argv: argument array
 *Return: interger
 */

int main(int argc, char **argv)
{
	int i, count = 0;

	for (i = 0; i < argc; i++)
	{
		count = *argv[i];
	}
	printf("%d\n", count);
	return (0);
}
