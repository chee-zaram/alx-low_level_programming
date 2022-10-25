#include "lists.h"

/**
 * free_listint_safe - Frees the listint_t list safely and sets h to NULL.
 * @h: Address of the h pointer.
 *
 * Return: The size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;

	if (h && *h)
	{
		if (*h > (*h)->next)
		{
			size = 1;
			size += free_listint_safe(&(*h)->next);
			free(*h);
			*h = NULL;
		}
		else
		{
			free(*h);
		}
		return (size);
	}
	return (size);
}

