#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat -  concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_string;
	size_t len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	conc_string = malloc(sizeof(char) * (len_s1 + len_s2));

	if (conc_string == NULL)
		return (NULL);

	_memcpy(conc_string, s1, len_s1);
	_memcpy(conc_string + len_s1, s2, len_s2 + 1);

	return (conc_string);
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
