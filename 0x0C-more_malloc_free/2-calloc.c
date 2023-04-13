#include "main.h"

/**
 *_calloc - allocates memory for an array
 * @nmemb: elements in an array
 *@size: size of nmemb
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
/**
 * *_memset-fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointer to n
 * @b: constant byte
 * @n: memory area pointed by s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}


