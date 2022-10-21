#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: singly linked list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, (nil));
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
