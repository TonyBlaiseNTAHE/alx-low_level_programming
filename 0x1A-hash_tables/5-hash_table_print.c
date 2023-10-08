#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the table.
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *sep;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	printf("{");
	sep = "";
	for (i = 0 ; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'", sep, ptr->key, ptr->value);
			sep = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
