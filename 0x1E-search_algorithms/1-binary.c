#include "search_algos.h"

/**
 * binary_search - function that performs a binary search in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the specific to be searched for
 *
 * Return: The index of the element, or -1 when the element is not found
 */

int binary_search(int *array, size_t size, int value)
{
	/* Variable declaration */
	size_t i, start = 0, mid, end = size - 1;

	/* check if the array is empty */
	if (array == NULL)
	{
		return (-1);
	}
	/* perform binary search */
	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
