#include "function_pointers.h"

/**
 * array_iterator - Calls a function on every element of an array.
 * @array: Array of element to be passed to function.
 * @size: Size of the array.
 * @action: Pointer to a function.
 *
 * Return: No return value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

