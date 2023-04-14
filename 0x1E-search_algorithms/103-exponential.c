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
 * b_search - Uses binary search algorithm to find a value
 * @array: Sorted array to search in
 * @l_bound: Lower bound of the sub-array
 * @u_bound: Upper bound of the sub-array
 * @value: Value to find in the sorted array
 *
 * Return: Index of the value in the array, otherwise NOT_FOUND
 */
static int b_search(int *array, size_t l_bound, size_t u_bound, int value)
{
	size_t mid = 0;

	if (!array)
		return (NOT_FOUND);

	while (l_bound <= u_bound)
	{
		print_array(array, l_bound, u_bound);

		mid = (l_bound + u_bound) / 2;

		if (array[mid] > value)
			u_bound = mid - 1;
		else if (array[mid] < value)
			l_bound = mid + 1;
		else
			return (mid);
	}

	return (NOT_FOUND);
}

/**
 * exponential_search - Uses exponential search algorithm to find a value
 * @array: Sorted array to search in
 * @size: Number of elements in the array
 * @value: Value to find in the sorted array
 *
 * Return: Index of the value in the array, otherwise NOT_FOUND
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t u_bound = 1, l_bound = 0;

	if (!array || size < 1)
		return (NOT_FOUND);

	while (u_bound < size && array[u_bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", u_bound, array[u_bound]);
		u_bound *= 2;
	}

	l_bound = u_bound / 2;
	/* If upper bound overflows, set upper bound to last index */
	u_bound = u_bound < size - 1 ? u_bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", l_bound, u_bound);

	/* return the result of binary search on the chosen sub-array */
	return (b_search(array, l_bound, u_bound, value));
}
