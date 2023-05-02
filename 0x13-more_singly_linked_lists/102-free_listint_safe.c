#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the head
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	listint_t *visited[1024] = {NULL};
	size_t count = 0, i;

	while (*h)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == visited[i])
			{
				*h = NULL;
				return (count);
			}
		}

		visited[count++] = *h;
		next = (*h)->next;
		free(*h);
		*h = next;

		if (count >= 1024)
			exit(98);
	}
	return (count);
}
