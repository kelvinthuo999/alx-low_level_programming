#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elements
 *
 * Description: reverses the content of an array of integers
 * Return: always (0)
 */

void reverse_array(int *a, int n)
{
	/* variable declaration */
	int start, end, temp;

	/* for loop to reverse the array */
	for (start = 0, end = n - 1; start < end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}

