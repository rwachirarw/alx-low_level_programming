#include "hash_tables.h"

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
