#include "lists.h"

/**
 * print_list - Prints out all the elements of a list_t list.
 * @h: Pointer to the head in the list.
 *
 * Return: Returns the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count = 1 + print_list(h->next);
	}

	return (count);
}

