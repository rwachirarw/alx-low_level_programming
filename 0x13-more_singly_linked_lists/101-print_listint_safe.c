#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0, i;
	const listint_t *visited[1024];

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;

		for (i = 0; i < count; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *) current, current->n);
				exit(98);
			}
		}

		visited[count - 1] = current;
		current = current->next;
	}

	return (count);
}
