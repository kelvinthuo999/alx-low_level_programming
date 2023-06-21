#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter on each element
 * @array:   Pointer to the first element of the array
 * @size:    The size of the array
 * @action:  Pointer to the function to be executed on each element
 *
 * Description: This function iterates over each element of the array and
 *              applies the specified action function to each element.
 *              If either the array or the action function is NULL, the
 *              function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
