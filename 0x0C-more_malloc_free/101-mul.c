#include "main.h"

/**
 * main - program start
 * @num1: first input
 * @num2: second input
 * Return: multiplication of num1 and num2
 */

int main(int argc, char **argv)
{
	char *num1;
	char *num2;
	char *result;

	if (argc != 3)
		_print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!_isdigit(num1) || !_isdigit(num2))
		_print_error();

	result = _multiply(num1, num2);

	if (result == NULL)
		_print_error();

	_print_result(result);

	return (0);
}

/**
  *_multiply - multiplies two positive numbers
  *@num1: first number
  *@num2: second number
  *Return: Multiplication of num1 and num2
  */

char *_multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int i, j;
	int carry, sum;
	char *result;

	result = malloc(sizeof(char) * (len_result + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i] += carry;
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

/**
  * _print_result - prints
  * @result: result to be printed
  * Return: void
  */

void _print_result(char *result)
{
	_puts(result);
	_putchar('\n');
}

/**
  * _print_error - prints error
  * Return: void
  */

void _print_error(void)
{
	_puts("Error");
	_putchar('\n');
	exit(98);
}

/**
  * _puts - prints a string
  * @s: string to be printed
  * Return: void
  */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
  *_isdigit - checks for a digit
  *@s: string to be checked
  *Return: 1
  */

int _isdigit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}
/**
  * _strlen - checks for the length of a string
  * @s: string
  *Return: length
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
