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
 * search - Seareches for a value in an array using binary search algorithm
 * @array: Array to be searched
 * @l_bound: Lower bound of the array
 * @u_bound: Upper bound of the array
 * @value: Value to be searched for
 *
 * Return: Index of first occurrence of value, otherwise NOT_FOUND
 */
static int search(int *array, size_t l_bound, size_t u_bound, int value)
{
	size_t mid    = 0;
	int    result = NOT_FOUND;

	if (l_bound > u_bound)
		return (NOT_FOUND);

	mid = (l_bound + u_bound) / 2;
	print_array(array, l_bound, u_bound);

	if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
		result = mid;
	if (array[mid] >= value)
		result = search(array, l_bound, mid, value);
	else
		result = search(array, mid + 1, u_bound, value);

	return (result);
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

	if (!array || size < 1)
		return (NOT_FOUND);

	return (search(array, 0, size - 1, value));
}
