#include "main.h"

/**
 ** positive_or_negative -Positive, negative os zero
 ** @i:value to test
 ** Return: Positive, negative os zero
 **/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
