#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initialize it with a specific character
 * @size: size of the array to create
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array, or NULL if size is 0 or if memory
 * allocation fails
 */

char *create_array(unsigned int size, char c)
{
	/* variable and array declaration */
	unsigned int idx;
	char *pta;

	/* check if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}
	/* allocate memory and initialize */
	else
	{
		pta = malloc(sizeof(char) * size);
		/* check if pta is NULL */
		if (pta == NULL)
		{
			return (NULL);
		}
		else
		{
			for (idx = 0; idx < size; idx++)
			{
				pta[idx] = c;
			}
			return (pta);
		}
	}
}
