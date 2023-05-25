#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: print size number of triangle
 */
void print_triangle(int size)
{
	/* variable declaration */
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)  /* using a for loop each row of the triangle */
		{
			for (j = 0; j < size - i - 1; j++)  /* print spaces before each row */
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)  /* print hashes to screen */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
