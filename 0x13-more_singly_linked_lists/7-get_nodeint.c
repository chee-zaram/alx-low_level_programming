#include "lists.h"

/**
 * get_nodeint_at_index - Finds the node at a specified index in the list.
 * @h: Pointer to the head node.
 * @index: Point at which to find node.
 *
 * Return: Pointer to the node.
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	if (h)
	{
		if (index > 0)
		{
			h = get_nodeint_at_index(h->next, index - 1);
			return (h);
		}
		return (h);
	}
	return (NULL);
}

