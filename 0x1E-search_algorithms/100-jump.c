#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if it is not present
 *         in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0, right = 0, index = -1;

	if (!array || size < 1)
		return (index);

	while (right < size && array[right] < value)
	{
		left = right, right += jump;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = right < size ? right : size - 1;

	for (; left <= right && array[left] <= value; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);

		if (array[left] == value)
		{
			index = left;
			break;
		}
	}

	return (index);
}
