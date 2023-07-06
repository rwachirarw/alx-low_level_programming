#include "hash_tables.h"

/**
 * hash_table_set - sets a hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if succeeds, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node = NULL;
    hash_node_t *current = NULL;

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
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
