#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Lowest number in the array.
 * @max: Highest number in the array.
 *
 * Return: Pointer to the array. NULL if min > max, or malloc fails.
 */
int *array_range(int min, int max)
{
	int i, len;
	int *mptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	mptr = malloc(sizeof(int) * len);
	if (mptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		mptr[i] = min++;

	return (mptr);
}

