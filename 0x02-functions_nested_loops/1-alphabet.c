#include <stdio.h>
#include "main.h"
/**
 *** main - Entry point
 *** A function prints the alphabet, in lowercase, followed by a new line
 *** Return: 0
 ***/
void print_alphabet(void)
{
	char alph;
	for(alph = 'a'; alph<='z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
