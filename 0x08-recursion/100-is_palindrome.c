#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the pointer to the string to be checked
 *Return: integer
 */

int is_palindrome(char *s)
{
	int len;

	len = length(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * length - returns the length of a string
 * @s: string
 * Return: integer
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * is_palindrome_recursive - acts as a palindrome helper
 * @s: string pointer
 * @start: start of the string
 * @end: end of the string
 * Return: integer
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
