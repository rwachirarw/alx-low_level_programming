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
for (numbers = 0; numbers <= 15; numbers++)
{
	if (numbers < 10)
	putchar(numbers + '0');
	else
	putchar(numbers - 10 + 'a');
}
putchar('\n');
return (0);
}
