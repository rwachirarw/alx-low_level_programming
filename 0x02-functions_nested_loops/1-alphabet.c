#include <stdio.h>
#include "main.h"
/**
 *** main - Entry point
 *** prints the alphabet, in lowercase, followed by a new line
 *** Return: 0
 ***/
int main(void)
{
	char alph;
	for(alph = 'a'; alph <='z'; alph++)
		_putchar(alph);
	_putchar('\n');
	return (0);
}
