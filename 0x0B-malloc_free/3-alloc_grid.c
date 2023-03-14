#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D arrray
 * @width: width of  the array
 * @height: height of the array
 * Return: integer pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocate momery for the pointer*/
	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (grid);
}
