#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the pointer to the string to be checked
 *Return: integer
 */

int is_palindrome(char *s)
{
	static int i = 0;
	static int len = 0;

	if (*s != '\0') {
		len++;
		is_palindrome(s + 1);
	}

	if (i >= len / 2) {
		return (1);
	}

	if (s[i] != s[len - i - 1]) {
		return (0);
	}

	i++;

	return (1);
}
