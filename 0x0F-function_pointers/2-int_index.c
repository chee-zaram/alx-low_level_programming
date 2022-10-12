#include "function_pointers.h"

/**
 * int_index - Searches for the presence of an integer in an array.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Function which compares the integers.
 *
 * Return: Returns the index of the first occurence of the integer.
 * Else, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

