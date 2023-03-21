#include <stdio.h>
#include "main.h"
/**
 *** jack_bauer - computes the value of a interger
 ***
 *** Return: uhuh
 **/
void jack_bauer(void)
{
	char i = 0, j = 0;

	while(i < 24)
	{
		while(j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar('\n');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
