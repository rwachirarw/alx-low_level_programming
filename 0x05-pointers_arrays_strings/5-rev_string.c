#include "main.h"
#include <stdio.h>

/**
 * rev_string-reverses a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	for (i = s[10]; i >= s[0]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

