#include <stdlib.h>
#include "main.h"

/**
 *strtow-splits a string into words
 *@str: the string
 *Return: pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	int i, j, k;
	int num_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < num_words; i++)
	{
		while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
			j++;

		k = j;

		while (str[j] != ' ' && str[j] != '\t' && str[j] != '\n' && str[j] != '\0')
			j++;

		words[i] = malloc((j - k + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(words[i]);

			free(words);
			return (NULL);
		}

		_strncpy(words[i], str + k, j - k);
		words[i][j - k] = '\0';
	}

	words[num_words] = (NULL);

	return (words);
}

/**
 * count_words - count words in a string
 *@str: the string
 *Return: the count of the words in int
 */

int count_words(char *str)
{
	int i;
	int count = 0;
	int in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (in_word)
			{
				count++;
				in_word = 0;
			}
		}
		else
			in_word = 1;
	}

	if (in_word)
		count++;

	return (count);
}
/**
 * _strncpy - copies a string
 * @dest: char type
 * @src: char type
 * @n: integer type
 * Return: char type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
