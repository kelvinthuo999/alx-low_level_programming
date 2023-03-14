#include <stdlib>

/**
 * free_grid - deallocates memory
 * @grid: pointer to an array of 2D
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
