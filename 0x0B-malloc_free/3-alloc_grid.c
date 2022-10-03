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
	int **grid, *mptr, x, y, tot_len;

	if (width <= 0 || height <= 0)
		return (NULL);

	tot_len = (sizeof(int *) * height) + (sizeof(int) * width * height);
	grid = (int **)malloc(tot_len);

	if (grid == NULL)
		return (NULL);

	mptr = (int *)(grid + height);

	for (x = 0; x < height; x++)
		*(grid + x) = mptr + (width * x);

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			*(*(grid + x) + y) = 0;
	}

	return (grid);
}

