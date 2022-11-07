#include "lists.h"

/**
 * listint_len - prints the numbers of elements in a linked list
 * @h: header of nodes
 *
 * Return: nothing
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
