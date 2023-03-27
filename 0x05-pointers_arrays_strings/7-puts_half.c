#include "main.h"
/**
  * puts_half-prints half of a string, followed by a new line
  * @str: pointer
  * Return: void
  */

void puts_half(char *str)
{
	int len = 0, j, i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		for (j = (len - 1) / 2; j <= len - 1; j++)
			_putchar(str[j + 1]);
	}
	_putchar('\n');
}

