#include "hash_tables.h"
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
