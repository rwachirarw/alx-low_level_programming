#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = NULL;
	unsigned long int idx = 0;

	if (size < 1)
		return (NULL);

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	sht->shead = NULL;
	sht->stail = NULL;

	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	while (idx < size)
	{
		sht->array[idx] = NULL;
		idx++;
	}

	return (sht);
}

/**
 * shash_table_set - sets a hash table
 * @ht: shash table
 * @key: key
 * @value: value
 * Return: 1 if succeeds, 0 if otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL;
	shash_node_t *current = NULL;
	shash_node_t *iter = NULL;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = current;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		iter = ht->shead;
		while (iter->snext && strcmp(key, iter->snext->key) >= 0)
			iter = iter->snext;
		if (iter == ht->stail)
		{
			iter->snext = new_node;
			new_node->sprev = iter;
			ht->stail = new_node;
		}
		else
		{
			new_node->snext = iter->snext;
			new_node->sprev = iter;
			iter->snext->sprev = new_node;
			iter->snext = new_node;
		}
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current = ht->array[index];
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	return (1);
}

/**
 * shash_table_get - a function that retrieves value associated with a key
 * @ht: hash table
 * @key: key to look for
 * Return: value
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *iter = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	iter = ht->array[index];
	while (iter)
	{
		if (strcmp(iter->key, key) == 0)
			return (iter->value);
		iter = iter->next;
	}
	return (NULL);
}

/**
 * shash_table_print - a function that prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *iter = NULL;
	int flagged = 1;

	if (ht == NULL)
		return;
	printf("{");
	iter = ht->shead;
	while (iter != NULL)
	{
		if (flagged)
		{
			printf("\'%s\': \'%s\'", iter->key, iter->value);
			flagged = 0;
		}
		else
			printf(", \'%s\': \'%s\'", iter->key, iter->value);
		iter = iter->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function that prints a hash table
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *iter = NULL;
	int flagged = 1;

	if (ht == NULL)
		return;
	printf("{");
	iter = ht->stail;
	while (iter != NULL)
	{
		if (flagged)
		{
			printf("\'%s\': \'%s\'", iter->key, iter->value);
			flagged = 0;
		}
		else
			printf(", \'%s\': \'%s\'", iter->key, iter->value);
		iter = iter->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes a hash table
 * @ht: shash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int index = 0;
	shash_node_t *prev_node = NULL;
	shash_node_t *curr_node = NULL;

	while (index < ht->size)
	{
		curr_node = ht->array[index];
		prev_node = ht->array[index];
		while (prev_node != NULL)
		{
			curr_node = curr_node->next;
			free(prev_node->key);
			if (prev_node->value != NULL)
				free(prev_node->value);
			free(prev_node);
			prev_node = curr_node;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
