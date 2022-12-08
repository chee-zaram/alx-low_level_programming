#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Head pointer.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
