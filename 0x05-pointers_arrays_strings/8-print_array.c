#include <stdio.h>
#include "main.h"

/**
 * print_array - Print every element of an array
 * @a: array holding elements to be printed
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	/* variable declaration and initialization */
	int index = 0;

	/* using a while loop to traverse the array */
	while (index < n)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
}
