#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *@str: the string given
 *Return: a pointer
 */

char *_strdup(char *str)
{
	char *str_copy;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str) + 1;
	str_copy = malloc(len * sizeof(char));

	if (str_copy == NULL)
		return (NULL);
	_memcpy(str_copy, str, len);

	return (str_copy);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: length of character
 */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
