#include "lists.h"

/**
 * free_listint2 - Frees all nodes in a list and sets the head pointer to NULL.
 * @head: Address of the head pointer.
 */
void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}

