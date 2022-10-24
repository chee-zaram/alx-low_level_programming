#include "lists.h"

/**
 * pop_listint - Deletes the head node in a list and returns the data.
 * @head: Address of the head pointer.
 *
 * Return: The data in the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int val = 0;

	if (head && *head)
	{
		val = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (val);
}

