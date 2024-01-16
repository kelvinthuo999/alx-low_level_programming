#include "search_algos.h"

/**
 * linear_search - Checks each element in the array to find a specific element
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: specific data to searched for in the array
 * Return: The index of the element in the array, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	/* Variable declaration */
	size_t i;

	/* Check if the array is empty */
	if (array == NULL)
	{
		return (-1);
	}
	/* For Loop to go through the each element of the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
