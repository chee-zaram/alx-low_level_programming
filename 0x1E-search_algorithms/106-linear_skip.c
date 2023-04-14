#include "search_algos.h"

/**
 * linear_skip - Uses jump search to find value in a list with an express lane
 * @list: Pointer to the first node in the list
 * @value: Value to search for in the list
 *
 * Return: Pointer to the node where the value first occurs, otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list;

	if (!list)
		return (NULL);

	/* Take express lane until we get to sublist of interest or end of list */
	while (express->n < value)
	{
		list = express, express = express->express;
		if (express)
			printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		else
			break;
	}

	/* If we are at end of list, make sure upper bound is last node */
	if (!express)
	{
		express = list;
		while (express->next)
			express = express->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       list->index, express->index);

	while (list && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}

	if (list && list->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		return (list);
	}

	return (NULL);
}
