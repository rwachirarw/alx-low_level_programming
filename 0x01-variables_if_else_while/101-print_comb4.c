#include <stdlib.h>
#include <stdio.h>
/**
 *** main - Entry point
 ***
 *** Return: Prints alphabets in lowercase
 ***/
int main(void)
{
int ones, tens, hundreds;
for (ones = 0; ones < 10; ones++)
{
	for (tens = ones + 1; tens < 10; tens++)
	{
		for (hundreds = tens + 1; hundreds < 10; hundreds++)
		{
			if (ones != tens && ones != hundreds && tens != hundreds)
			{
				putchar(ones + '0');
				putchar(tens + '0');
				putchar(hundreds + '0');
				if (ones != 7 || tens != 8 || hundreds != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
