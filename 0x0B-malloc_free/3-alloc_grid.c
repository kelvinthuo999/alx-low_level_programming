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
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocate momery for the pointer*/
	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(sizeof(**ptr) * width);
		if (ptr[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (ptr);
}
