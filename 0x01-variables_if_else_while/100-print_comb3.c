#include <stdlib.h>
#include <stdio.h>
/**
 *** main - Entry point
 ***
 *** Return: Prints alphabets in lowercase
 ***/
int main(void)
{
int ones, tens;
for (ones = 0; ones < 10; ones++)
{
	for (tens = ones + 1; tens < 10; tens++)
	{
		putchar(ones + '0');
		putchar(tens + '0');
		if (ones != 8 || tens != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
