#include <stdio.h>
#include "main.h"
/**
 *** jack_bauer - computes the value of a interger
 ***
 *** Return: uhuh
 **/
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		putchar(i + 48);
		for (i = 0; i < 4; i++)
		{
			_putchar(i + 48);
			_putchar(':');
			for (i = 0; i < 6; i++)
			{
				_putchar(i + 48);
				for (i = 0; i < 10; i++)
				{
					_putchar(i + 48);
				}
			}
		}
	}	
return (0);
}
