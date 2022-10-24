#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Address of the head pointer.
 * @n: Integer value for initializing node data.
 *
 * Return: Pointer to the head node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev_last = *head;
	listint_t *new_last = malloc(sizeof(listint_t));

	if (!new_last)
		return (NULL);

	new_last->n = n;
	new_last->next = NULL;

	if (!*head)
	{
		*head = new_last;
		return (*head);
	}

	while (prev_last)
	{
		if (!prev_last->next)
		{
			prev_last->next = new_last;
			break;
		}
		prev_last = prev_last->next;
	}

	return (*head);
}

