#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 1; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
