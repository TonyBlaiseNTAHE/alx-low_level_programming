#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	hash_node_t *s;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while ((s = p)!= NULL)
		{
			p = p->next;
			free(s->value);
			free(s->key);
			free(s);
		}
	}
	free(ht->array);
	free(ht);
}
