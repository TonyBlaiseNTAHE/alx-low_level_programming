#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update
 * @key: is the key
 * @value: the value
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    unsigned long int index, i;

    i = hash_djb2((const unsigned char *)key);
    index = i % ht->size;

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        /* Handle memory allocation failure */
        return (0);
    }

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        /* Handle memory allocation failure */
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        /* Handle memory allocation failure */
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
