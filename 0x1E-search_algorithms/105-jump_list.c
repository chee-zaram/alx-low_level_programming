#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Uses the jump search algorithm to find a value in a sorted list
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t     jump = sqrt(size), i = 0;
	listint_t *u_bound = list, *l_bound = NULL;

	if (!list || size < 1)
		return (NULL);

	while (u_bound->n < value && u_bound->next)
	{
		l_bound = u_bound;
		for (i = jump; i && u_bound->next; i--)
			u_bound = u_bound->next;

		printf("Value checked at index [%lu] = [%d]\n", u_bound->index, u_bound->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       l_bound->index, u_bound->index);

	while (l_bound && l_bound->index <= u_bound->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", l_bound->index, l_bound->n);
		if (l_bound->n == value)
			return (l_bound);

		l_bound = l_bound->next;
	}

	return (NULL);
}
