#include "lists.h"

/**
 * print_listint - A function that prints out the all elements of listint.
 * @h: Head pointer to listint.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		printf("%d\n", h->n);
		count = 1 + print_listint(h->next);
	}
	return (count);
}

