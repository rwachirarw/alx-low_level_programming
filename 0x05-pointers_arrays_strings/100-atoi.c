#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer
 * Return: Integer
 **/
int _atoi(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (res);
}
