#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: n number times table
 *
 * Return: none
 */
void print_times_table(int n)
{
	/* variable declarations */
	int num1, num2, result;

	/* check if the number is between 0 and 15 */
	if (n >= 0 && n <= 15)
	{
		/* using for loop to traverse the numbers */
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');
			for (num2 = 1; num2 <= n; num2++)
			{
				result = num1 * num2;
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result <= 99)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(((result / 100) % 10) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
