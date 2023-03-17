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
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
	putchar(numbers + '0');
}
putchar('\n');
return (0);
}
