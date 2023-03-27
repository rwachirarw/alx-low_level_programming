#include <stdio.h>
#include "main.h"

/**
 * print_rev-prints a string, in reverse, followed by a new line
 * @s: pointer
 i  * Return: void
 */

void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = len; i >= 1; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}

