#include <stdio.h>
#include "main.h"
/**
 *** jack_bauer - computes the value of a interger
 ***
 *** Return: uhuh
 **/
void jack_bauer(void)
{
	int i, j;

	while(i < 24)
	{
		_putchar(i + 48);
		_putchar(':');
		while(j < 60)
		{
			_putchar(j + 48);
			_putchar('/n');
		}
	}
}
