#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: head
 * @idx: index
 * @n: data
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (temp != NULL)
	{
		if (i == idx)
		{
			if (!(*h))
			{
				*h = new_node;
				return (new_node);
			}
			else if (temp == *h)
			{
				new_node->next = temp;
				temp->prev = new_node;
				*h = new_node;
				return (new_node);
			}
			else
			{
				new_node->prev = temp->prev;
				new_node->next = temp;
				temp->prev->next = new_node;
				temp->prev = new_node;
				return (new_node);
			}
		}
		temp = temp->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
