#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	/* variable declaration */
	void *pta;

	/* Allocate memory */
	pta = malloc(sizeof(b));

	/* Check if allocated memory is NULL */
	if (pta == NULL)
	{
		exit(98);
	}
	else
	{
		return (pta);
	}
}
