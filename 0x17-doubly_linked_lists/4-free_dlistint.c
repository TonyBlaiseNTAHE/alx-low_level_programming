#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head pointer.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	if (head == NULL)
	{
		printf("List is empty");
	}
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
