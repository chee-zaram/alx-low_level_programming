#include "lists.h"

/**
 * list_len - Function that counts the number of nodes in a list.
 * @h: Pointer to head node of list.
 *
 * Return: Returns the number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (h)
		for (temp = h; temp; temp = temp->next)
			count++;

	return (count);
}

