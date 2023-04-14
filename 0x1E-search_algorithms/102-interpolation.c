#include "search_algos.h"

/**
 * interpolation_search - Finds a value in a sorted array using the
 *		interpolation algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value, or -1 if it could not be found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t beg = 0, end = size - 1, pos = 0;

	if (!array)
		return (NOT_FOUND);

	while (beg <= end && value >= array[beg] && value <= array[end])
	{
		pos = INTERPOLATION_FORMULA;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
		{
			beg = pos + 1;
			continue;
		}

		if (array[pos] > value)
		{
			end = pos - 1;
			continue;
		}

		/* Check if it's the first occurence of the value */
		while (pos > 0 && array[pos - 1] == value)
		{
			pos--;
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
		return (pos);
	}

	pos = INTERPOLATION_FORMULA;
	printf("Value checked array[%lu] is out of range\n", pos);

	return (NOT_FOUND);
}
