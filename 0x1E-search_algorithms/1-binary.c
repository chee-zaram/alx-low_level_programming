#include "search_algos.h"

/**
 * search - find the index of a given number using binary search
 * @array: Array of integers to find number in
 * @beg: Beginning of the array or sub array
 * @end: End of the array or sub array
 * @value: Value to find in the given array
 *
 * Return: The index of the first occurrence or -1 if not found
 */
static int search(int *array, size_t beg, size_t end, int value)
{
	size_t i, mid;

	if (beg > end)
		return (-1);

	printf("Searching in array:");
	for (i = beg; i <= end; ++i)
	{
		if (i == end)
		{
			printf(" %d\n", array[i]);
			continue;
		}

		printf(" %d,", array[i]);
	}

	mid = (beg + end) / 2;

	if (array[mid] > value)
		return (search(array, beg, mid - 1, value));

	if (array[mid] < value)
		return (search(array, mid + 1, end, value));

	return (mid);
}

/**
 * binary_search - Uses `binary search algorithm` to find a number in an array
 * @array: An array containing items
 * @size: The number of items in the array
 * @value: Value of the item to search for
 *
 * Description:
 *	We can assume that array will be sorted in ascending order
 *	We can assume that value won’t appear more than once in array
 *
 * Return: The index where the item first occurs, or -1 if it was not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size < 1)
		return (-1);

	return (search(array, 0, size - 1, value));
}
