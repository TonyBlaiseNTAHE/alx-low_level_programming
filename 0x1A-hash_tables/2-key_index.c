#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: the key.
 * @size: the size of the array of the hash table.
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *table;
	unsigned long int index, i;
	hash_node_t  *new_node;

	if (size < 1)
		return (-1);
	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (-1);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (!table->array)
	{
		free(table);
		return (-1);
	}
	memset(table->array, 0, sizeof(hash_table_t *) * size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (-1);
	}
	i = hash_djb2(key);
	index = i % size;
	new_node->key = (char *)key;
	new_node->next = table->array[index];
	table->array[index]  = new_node;
	return (index);
}
