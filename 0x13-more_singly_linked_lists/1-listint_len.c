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
        listint_t *ptr = NULL;

	if (h == NULL)
	{
		printf("List is empty.");
	}
	h = ptr;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	
	printf("%ld", count);
	return (0);
}
