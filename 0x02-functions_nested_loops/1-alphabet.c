#include <stdio.h>
#include "main.h"
/**
 *** main - Entry point
 *** Description: Print alphabet in small letters
 *** Return
 ***/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
