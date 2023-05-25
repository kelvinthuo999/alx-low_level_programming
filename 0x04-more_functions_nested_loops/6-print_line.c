#include "main.h"

/**
 * print_line - Print a line on the screen
 * @n: length of the line
 */

void print_line(int n)
{
	/* variable declaration */
	int line;

	/* using an if statement incase of 0 */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* using a for loop to complete the task */
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
