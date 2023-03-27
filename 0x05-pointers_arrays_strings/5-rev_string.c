#include <stdio.h>

/**
 * rev_string-reverses a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	char smp;
	int i, num, num2;

	num = 0;
	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	num2 = num - 1;

	for (i = 0; i < num / 2; i++)
	{
		smp = s[i];
		s[i] = s[num2];
		s[num2--] = smp;
	}
}

