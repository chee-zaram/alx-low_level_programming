#include "lists.h"

/**
 * print_list - Prints out all the elements of a list_t list.
 * @h: Pointer to the head in the list.
 *
 * Return: Returns the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (h)
		for (temp = h; temp; temp = temp->next)
		{
			if (!temp->str)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", temp->len, temp->str);
			count++;
		}

	return (count);
}

