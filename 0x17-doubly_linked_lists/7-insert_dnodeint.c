#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: head pointer.
 * @idx: the index
 * @n: the data.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new_node, *s;
	unsigned int i = 0;
	unsigned int len = 0;


	if (h == NULL)
		return (NULL);
	s = *h;
	while (s != NULL)
	{
		s = s->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	else if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	ptr = *h;
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = ptr;
	new_node->next = ptr->next;
	ptr->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
