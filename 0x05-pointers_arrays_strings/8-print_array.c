#include "main.h"
#include <stdio.h>

/**
 * print_array - print a certain number of elements in an array
 * @a: first integer
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int *ptr = a, i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", ptr[i]);
		else if (i > 0)
		{
			printf(", ");
			printf("%d", ptr[i]);
		}
	}
	printf("%c", '\n');
}
