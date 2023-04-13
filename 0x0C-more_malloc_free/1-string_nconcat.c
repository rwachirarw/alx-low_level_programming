#include "main.h"

/**
  *string_nconcat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *@n: bytes of s2
  *Return: pointer to memory of the new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int) s1[i]; i++)
		new_string[i] = s1[i];

	for (j = 0; j < n; j++)
		new_string[i + j] = s2[j];

	new_string[i + j] = '\0';

	return (new_string);
}
