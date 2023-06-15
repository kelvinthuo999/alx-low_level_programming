#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum parameter
 * @max: maximum parameter
 * Return: Pointer the newly created array
 */

int *array_range(int min, int max)
{
	/* variable declaration */
	int *pta, idx, range;

	/* checks */
	if (min > max)
		return (NULL);

	/* variable initialization */
	range = (max - min) + 1;
	pta = malloc(sizeof(int) * range);

	/* check */
	if (pta == NULL)
		return (NULL);
	else
	{
		for (idx = 0; idx < range; idx++)
		{
			pta[idx] = min++;
		}
		return (pta);
	}
}
