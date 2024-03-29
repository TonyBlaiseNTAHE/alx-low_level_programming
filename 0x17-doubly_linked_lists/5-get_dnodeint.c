#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head pointer.
 * @index: the index of the node, starting from 0.
 * Return: the address of that node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
