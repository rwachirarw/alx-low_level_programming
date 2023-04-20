#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_numbers -  prints numbers, followed by a new line
  * @separator: separator
  * @n: number of int passed
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
