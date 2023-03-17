#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *** main - Entry point
 ***
 *** Return: Prints alphabets in lowercase
 ***/
int main(void)
{
int ones, tens;
for (ones = 0; ones <= 9; ones++)
{
	for (tens = 0; tens <= 9; tens++)
	{
	putchar(ones + '0');
	putchar(tens + '0');
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
