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
int alph;
for (alph = 'z'; alph >= 'a'; alph--)
{
	putchar(alph);
}
putchar('\n');
return (0);
}
