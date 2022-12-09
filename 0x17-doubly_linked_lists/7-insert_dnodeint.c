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
	dlistint_t *new = NULL, *temp = NULL;
	unsigned int i = 0;

	if (h)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));

		for (i = 0, temp = *h; temp && i < idx; temp = temp->next, i++)
			if (i == idx - 1)
			{
				if (temp->next)
				{
					new = malloc(sizeof(*new));
					if (!new)
						return (new);
					new->n = n;
					new->next = temp->next;
					new->prev = temp;
					temp->next->prev = new;
					temp->next = new;
					return (new);
				}
				return (add_dnodeint_end(h, n));
			}
	}
	return (new);
}
