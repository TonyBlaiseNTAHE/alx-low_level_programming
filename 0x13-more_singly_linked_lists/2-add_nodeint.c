#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning
 * @head: head of list
 * @n: integer
 * return: Address of new element. NULL if its fails
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = ptr;
	return (head);
}
