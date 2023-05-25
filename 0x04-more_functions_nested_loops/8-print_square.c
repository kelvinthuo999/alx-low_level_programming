#include "main.h"

/**
 * print_square - Print a square to the standard output
 * @size: the size of the square
 */

void print_square(int size)
{
	/* variable declaration */
	int height, width;

	/* using if statement to handle size 0*/
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* using nested for loops to complete the task */
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
