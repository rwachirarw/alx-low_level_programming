#include "main.h"

/**
 * binary_to_uint - converts binary to a number
 * @b: pointer to a string of 0 and 1
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = (num << 1) | (b[i] - '0');
	}
	return (num);
}
