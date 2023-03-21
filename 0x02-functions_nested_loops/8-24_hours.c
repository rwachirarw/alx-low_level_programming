#include <stdio.h>
#include "main.h"
/**
 *** jack_bauer - computes the value of a interger
 ***
 *** Return: uhuh
 **/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		putchar(i + 48);
		for (j = 0; j < 4; j++)
		{
			_putchar(j + 48);
			_putchar(':');
			for (k = 0; k < 6; k++)
			{
				_putchar(k + 48);
				for (l = 0; l < 10; l++)
				{
					_putchar(l + 48);
					_putchar('\n');
				}
			}
		}
	}
}
