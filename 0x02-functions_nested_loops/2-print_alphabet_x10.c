#include <stdio.h>
#include "main.h"
/**
 *** print_alphabet_x10 - prints alphabets 10x
 *** Return
 ***/

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
