#include "main.h"

/**
 * alloc_grid - Allocates dynamic memory to a 2d array of int initialized to 0.
 * @width: Size of the width of the array.
 * @height: Size of the height of the array.
 *
 * Return: Pointer to the 2d array, NULL if failed to find memory,
 * or NULL if width or height is 0 or less.
 */
int **alloc_grid(int width, int height)
{
	int **mptr, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mptr = (int **)malloc(sizeof(int *) * height);

	if (mptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		*(mptr + x) = (int *)malloc(sizeof(int) * width);
		if (*(mptr + x) == NULL)
			return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			*(*(mptr + x) + y) = 0;
	}

	return (mptr);
}

