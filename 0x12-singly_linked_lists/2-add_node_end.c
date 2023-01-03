#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of
 * a list_t list
 * @head: A pointer to the head of the list_t list
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *   otherwise - the address of the new of the new element.
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++);

	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
