#include <stdio.h>
#include "main.h"

/**
  * puts2-prints a string, followed by a new line
  * @str: pointer
  * Return: void
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (i + 1 != '\n')
			i = i + 2;
	}
	_putchar('\n');
}

