#include "main.h"

/**
 * main - program start
 * @num1: first input
 * @num2: second input
 * Return: multiplication of num1 and num2
 */

int main(int argc, char **argv)
{
	int i, j, num1_len, num2_len;
	int *result;
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
		_print_error();

	num1_len = _strlen(argv[1]);
	num2_len = _strlen(argv[2]);
	result = calloc(num1_len + num2_len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	/* multiply each digit of num1 with num2 */
	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			/* multiply each digit and add to result */
			int mul = (argv[1][i] - '0') * (argv[2][j] - '0');
			/* add to previous result */
			int sum = result[i + j + 1] + mul;
			/* update result */
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	/* print result and free the allocated memory */
	print_result(result, num1_len + num2_len);
	free(result);
	return (0);
}
/**
 * print_result - prints the result of the multiplication
 * @result: array of integers
 * @len: length of result
 * Return: void
 */
void print_result(int *result, int len)
{
	int i;
	/* remove leading zeros */
	for (i = 0; i < len && result[i] == 0; i++)
		;
	/* if all digits are 0, print 0 */
	if (i == len)
		printf("0");
	/* print the result */
	for (; i < len; i++)
		printf("%d", result[i]);
	printf("\n");
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

	free(result);
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
