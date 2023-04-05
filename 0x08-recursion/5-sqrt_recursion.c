#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_checker(n, 1));
}

/**
  * _sqrt_checker - checks for the squares of the next number
  * @n: integer passed in from the _sqrt_checker function
  * @i: interger to represent the next number
  * Return: Integer
  */

int _sqrt_checker(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_checker(n, i + 1));
}
