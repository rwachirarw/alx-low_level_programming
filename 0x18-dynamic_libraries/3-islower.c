#include <stdio.h>
#include "main.h"
/**
 *** _islower - checks for lower character
 *** Return: 1 if c is lowercae, 0 otherwise
 *** @c: the character to check
 **/

int _islower(int c)
{
	if (c > 90)
		return (1);
	return (0);
}
