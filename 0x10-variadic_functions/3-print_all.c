#include "variadic_functions.h"
#include <stdarg.h>
#include <stdbool.h>
/**
  * print_all - prints anything
  * @format: format
  * Return: void
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *str;
	bool comma;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			comma = true;
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			comma = true;
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			comma = true;
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);
			comma = true;
		}
		else
			comma = false;
		if (format[i + 1] != '\0' && comma == true)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

