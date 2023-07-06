#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves value associated with a key
 * @ht: hash table
 * @key: key to look for
 * Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *iter = NULL;

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