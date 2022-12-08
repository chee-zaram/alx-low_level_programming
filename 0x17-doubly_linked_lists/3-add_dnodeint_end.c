#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Address of head pointer.
 * @n: Data.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		if (*head && (*head)->next)
			return (add_dnodeint_end(&(*head)->next, n));
		new = malloc(sizeof(*new));
		if (new)
		{
			new->prev = NULL;
			new->next = NULL;
			new->n = n;
			if (*head)
			{
				(*head)->next = new;
				new->prev = (*head);
			}
			else
			{
				*head = new;
			}
			return (new);
		}
	}
	return (NULL);
}
