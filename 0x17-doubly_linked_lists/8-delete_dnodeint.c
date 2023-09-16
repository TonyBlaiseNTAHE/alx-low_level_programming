#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: head pointer.
 * @index: the index.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	/* Handle the case when the index is 0 (delete the first node)*/
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	/*Traverse the list to find the node at the specified index*/
	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	/*If the node at the specified index doesn't exist, return -1*/
	if (!temp)
		return (-1);
	/*Adjust the previous and next pointers to bypass the node to be deleted*/
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
