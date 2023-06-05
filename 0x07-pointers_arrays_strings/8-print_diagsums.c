#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: Pointer to the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	/* variable declaration and initialization */
	int idx = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (idx < size)
	{
		/* Add diagonal 1 element to sum1 */
		sum1 += a[idx * size + idx];

		/* Add diagonal 2 element to sum2 */
		sum2 += a[idx * size + size - 1 - idx];

		/* Increment loop variable */
		idx++;
	}
	/* Print the sums */
	printf("%d, %d\n", sum1, sum2);
}
