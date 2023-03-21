#include <stdio.h>
#include "main.h"
/**
 *** this function checks for lowercase character
 *** _islower - checks for lowercase character
 *** Return 1
 ***/

int _isalpha(int c)
{
	if (c > 64 || c < 123)
		return (1);
	return (0);
}
