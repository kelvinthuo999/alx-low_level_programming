#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* variable declaration and initialization */
	unsigned int idx;
	void *pta;

	/* check if nmemb and size are 0 */
	if ((nmemb <= 0) || (size <= 0))
	{
		return (NULL);
	}

	/* allocate memory */
	pta = malloc(nmemb * size);

	/* check if malloc is NULL */
	if (pta == NULL)
	{
		return (NULL);
	}
	else
	{
		for (idx = 0; idx < (nmemb * size); idx++)
		{
			*((char *)pta + idx) = 0;	/* initialize with zero */
		}
		return (pta);
	}
}
