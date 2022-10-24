#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h:head of the list
 *
 *Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodess = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		nodess++;
	}
	return (nodess);
}
