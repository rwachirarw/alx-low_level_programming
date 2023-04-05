#include "main.h"

/**
  *factorial(int n)-returns the factorial of a given number.
  *@n: factorial number
  *Return: interger
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
