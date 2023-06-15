#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head
 * @index: index
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;


	if (head == NULL)
		return (-1);


