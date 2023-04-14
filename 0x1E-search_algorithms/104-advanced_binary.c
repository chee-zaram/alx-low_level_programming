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
 * advanced_binary - Finds first occurrence of a value in an array
 * @array: An array containing items
 * @size: The number of items in the array
 * @value: Value of the item to search for
 *
 * Description:
 *	We can assume that array will be sorted in ascending order
 *
 * Return: The index where the item first occurs, otherwise NOT_FOUND
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid   = 0;
	int    index = 0;

	if (!array || size < 1)
		return (NOT_FOUND);

	print_array(array, 0, size - 1);

	if (size == 1 && array[0] != value)
		return (NOT_FOUND);

	mid = (size - 1) / 2;
	if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
		return (mid);

	if (array[mid] < value)
	{
		index = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (index == NOT_FOUND)
			return (NOT_FOUND);
		return (index + mid + 1);
	}

	return (advanced_binary(array, mid + 1, value));
}
