#include <stdio.h>
#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer
  * Return: length of character
  */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

