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
int ones;
for (ones = 0; ones <= 9; ones++)
{
	putchar(ones + '0');
	if (ones <= 8)
	{
	putchar(',');
	putchar(' ');
	}
}
return (0);
}
