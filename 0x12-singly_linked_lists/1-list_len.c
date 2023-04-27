#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;
	return (count);
}
