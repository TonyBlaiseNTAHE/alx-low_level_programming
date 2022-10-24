#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h:head of the list
 *
 *Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}
	return (count);
}
