#include "search_algos.h"

/**
 * linear_search - Finds an item in an array using linear search algorithm
 * @array: The array containing items to search for
 * @size: The number of items in the array
 * @value: Value of the item to search for
 *
 * Return: The first index where `value` is located, or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size < 1)
		return (NOT_FOUND);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (NOT_FOUND);
}
