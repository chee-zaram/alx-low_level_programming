#include "main.h"

/**
 * free_grid - Frees memory for a 2d grid created by the alloc_grid() function.
 * @grid: Pointer to the grid.
 * @height: Height of grid.
 *
 * Return: No return value.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	free(grid);
}

