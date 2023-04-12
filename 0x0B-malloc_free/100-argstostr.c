#include <stdlib.h>
#include "main.h"

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: first argument
 *@av: second argument
 *Return: a pointer tot he new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len = len + _strlen(av[i]) + 1;

	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		_strcpy(str + j, av[i]);
		j = j + _strlen(av[i]);
		str[j++] = '\n';
	}
	str[len - 1] = '\0';
	return (str);
}

/**
 *_strcpy - copies the string
 *@dest: destination of the string to be copied
 *@src: source of the string to be copied
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
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

