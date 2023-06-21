#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element for which the comparison function
 *         does not return 0, -1 if no such element is found or an error occurs
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Variable declaration */
	int i;

	/* Check for invalid parameters */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	/* Iterate over the array */
	for (i = 0; i < size; i++)
	{
		/* Call the comparison function and check the result */
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	/* No match found */
	return (-1);
}
