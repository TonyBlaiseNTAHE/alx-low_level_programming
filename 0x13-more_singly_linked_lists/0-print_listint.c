#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer of the list
 *
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

