#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in a linked dlistint_t list.
 * @h: Head pointer.
 *
 * Return: Number of elements in a dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));
	return (0);
}
