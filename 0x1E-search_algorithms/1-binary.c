#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array using binary algorithm
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * @value: element to be searched for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	/* variable declaration */
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
