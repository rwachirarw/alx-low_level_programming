#include <stdio.h>
#include "main.h"
/**
 *** print_sign - print sign
 *** Return
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
		_putchar('\n');
	}
	else if (n < 0)
	{
		return (0);
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		return (-1);
		_putchar(45);
		_putchar('\n');
	}
}
