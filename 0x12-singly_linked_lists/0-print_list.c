#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
	}
	return (count);
}
