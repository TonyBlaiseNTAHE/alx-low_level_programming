#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_node_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
