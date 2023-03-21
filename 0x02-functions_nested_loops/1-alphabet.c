#include <stdio.h>
#include "main.h"
/**
 *** main - Entry point
 *** print_alphabet - print alphabet
 *** Return
 ***/

print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
