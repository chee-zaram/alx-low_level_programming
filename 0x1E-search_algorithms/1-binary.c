#include "search_algos.h"

/**
 * print_array - Prints array in sorted order
 * @array: Array to be printed
 * @l_bound: Lower bound of the array
 * @u_bound: Upper bound of the array
 */
static void print_array(int *array, size_t l_bound, size_t u_bound)
{
	printf("Searching in array:");
	while (l_bound < u_bound)
		printf(" %d,", array[l_bound++]);
	printf(" %d\n", array[l_bound]);
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
	size_t beg = 0, end = size - 1, mid = 0;

	if (!array || size < 1)
		return (-1);

	/* I had used recursion, but it has a worse space complexity Ologn. */
	/* return (search(array, 0, size - 1, value)); */

	while (beg <= end)
	{
		mid = (beg + end) / 2;
		print_array(array, beg, end);

		if (array[mid] < value)
			beg = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (NOT_FOUND);
}
