#include <stdio.h>

/**
 *main-program start
 *@argc: argument count
 *@argv: argument array
 *Return: interger
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
