#include "lists.h"

/**
 * listint_len - Calculates the number of elements in listint_t.
 * @h: Pointer to the head node.
 *
 * Return: The length of a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
		count = 1 + listint_len(h->next);
	return (count);
}

