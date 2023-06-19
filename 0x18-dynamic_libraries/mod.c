#include "main.h"
/**
 * mod - find the remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
