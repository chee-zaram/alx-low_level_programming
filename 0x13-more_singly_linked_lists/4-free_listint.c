#include "lists.h"

/**
 * free_listint - Deletes all the nodes in a listint_t list.
 * @head: Pointer to the head node.
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

