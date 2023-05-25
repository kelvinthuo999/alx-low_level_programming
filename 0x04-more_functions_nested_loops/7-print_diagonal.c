#include "main.h"

/**
 * print_diagonal - Print a diagonal line on the standard output
 * @n: the number of times to print the diagonal line
 */

void print_diagonal(int n)
{
	/* variable declaration */
	int space, diag_line;

	/* using an if statement plus nested for loop to complete task */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diag_line = 0; diag_line < n; diag_line++)
		{
			for (space = 0; space < diag_line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');	/* first backslash used as an escape */
			_putchar('\n');
		}
	}
}
