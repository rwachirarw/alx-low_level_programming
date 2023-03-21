#include <stdio.h>
#include "main.h"
/**
 *** print_sign - print alphabet
 *** @n: bhabdh
 *** Return: uhuh
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(49);
		_putchar(43);
		_putchar('\n');
	}
	else if (n < 0)
	{
		return (0);
		_putchar(48);
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		return (-1);
		_putchar(49);
		_putchar(45);
		_putchar('\n');
	}
}
