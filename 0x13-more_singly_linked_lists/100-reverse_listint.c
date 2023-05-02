#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to a head pointer
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	for (; current != NULL; current = next)
	{
		next = current->next;
		current->next = prev;
		prev = current;
	}

	*head = prev;
	return (*head);
}

