#include "lists.h"
#include <string.h>

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: singly linked list
 *
 * Return:number of element in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}


