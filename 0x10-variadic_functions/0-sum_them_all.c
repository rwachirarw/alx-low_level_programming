#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum of all the parameters.
  *@n: parameter
  *Return: integer sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	return (sum);
}
