#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid in alloc_grid ftn
 * @grid: pointer to the 2d array
 * @height: array lenth
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
