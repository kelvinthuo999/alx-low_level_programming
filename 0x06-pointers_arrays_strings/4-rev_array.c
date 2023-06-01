#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 *
 * Return: None
 */
void reverse_array(int *a, int n)
{
	/* variable declaration and initialization */
	int start = 0;
	int end = n - 1;
	int temp = a[start];

	/* while loop to interchange elements */
	while (start < end)
	{
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
