#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: head pointer
 * Return: the number of elements in a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ptr;

	ptr  = h;
	while (ptr != 0)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
