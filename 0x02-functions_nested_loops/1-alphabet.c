#include <stdio.h>
#include "main.h"
/**
 *** main - Entry point
 *** prints the alphabet, in lowercase, followed by a new line
 *** Return: 0
 ***/
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
void print_alphabet()
{
	char alph;
	for(alph = 'a'; alph<='z'; alph++)
		_putchar(alph);
	return (0);
}
