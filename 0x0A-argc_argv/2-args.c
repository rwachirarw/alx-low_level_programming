#include <stdio.h>
/**
 *main-program start
 *@argc: argument count
 *@argv: argument array
 *Return: interger
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
