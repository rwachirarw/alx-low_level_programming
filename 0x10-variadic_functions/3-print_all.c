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
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				comma = true;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				comma = true;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				comma = true;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				comma = true;
				break;
			default:
				comma = false;
				break;
		}

		if (format[i + 1] != '\0' && comma == true)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

