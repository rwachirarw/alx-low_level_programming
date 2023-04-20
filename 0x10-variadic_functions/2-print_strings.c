#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_strings - prints strings, followed by a new line
  * @separator: separator
  * @n: number of strings passed to the function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

