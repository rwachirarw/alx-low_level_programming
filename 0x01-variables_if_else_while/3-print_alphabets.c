#include <stdlib.h>
#include <stdio.h>
/**
 *** main - Entry point
 ***
 *** Return: Prints alphabets in lowercase
 ***/
int main(void)
{
	int alphlower;
	int alphupper;

	for (alphlower = 'a'; alphlower <= 'z'; alphlower++)
		putchar(alphlower);
	for (alphupper = 'A'; alphupper <= 'Z'; alphupper++)
		putchar(alphupper);
	putchar('\n');
	return (0);
}
