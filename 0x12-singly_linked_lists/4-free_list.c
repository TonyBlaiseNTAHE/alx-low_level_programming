#include "lists.h"

/**
 * free_list - free list_t in the list
 * @head: head pointer of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->next);
		free(current);
	}
}
