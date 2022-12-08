#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Address of head pointer.
 * @idx: Index at which to add new node.
 * @n: Data to add in node.
 *
 * Return: Pointer to new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;

	if (h)
	{
		if (idx == 0)
		{
			new = malloc(sizeof(*new));
			if (!new)
				return (NULL);

			new->prev = NULL;
			new->next = NULL;
			new->n = n;
			if (*h)
			{
				if ((*h)->prev)
				{
					(*h)->prev->next = new;
					new->prev = (*h)->prev;
				}
				new->next = *h;
				(*h)->prev = new;
			}
			*h = new;
			return (new);
		}
		if (*h)
			return (insert_dnodeint_at_index(&(*h)->next, idx - 1, n));
	}
	return (NULL);
}
