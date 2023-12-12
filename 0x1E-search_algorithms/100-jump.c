#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t left = 0, right = 0, i;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump_step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
