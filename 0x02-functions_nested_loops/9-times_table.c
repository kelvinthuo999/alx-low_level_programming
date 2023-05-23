#include "main.h"

/**
 * times_table - Prints the time table of the digit 9
 */

void times_table(void)
{
	/* declaration of variables */
	int digit1, digit2, result;

	/* using nested for loops to print the times tables */
	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			result = digit1 * digit2;
			if (digit2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
