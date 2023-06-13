#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The address of the two-dimensional grid.
 * @height: Height of the grid.
 *
 * Description: Frees the memory allocated for a 2D grid.
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int idx;

	if (grid == NULL || height <= 0)
		return;

	for (idx = 0; idx < height; idx++)
	{
		if (grid[idx] != NULL)
		{
			free(grid[idx]);
			grid[idx] = NULL;
		}
	}

	free(grid);
}
