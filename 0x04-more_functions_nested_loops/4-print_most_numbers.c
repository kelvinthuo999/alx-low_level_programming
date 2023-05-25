#include "main.h"

/**
 * print_most_numbers - Print most single digits
 */

void print_most_numbers(void)
{
	/* variable declaration */
	int digit;

	/* using a for loop to print the digits and if statement for exclusion */
	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == '2' || digit == '4')
		{
			continue;
		}
		_putchar(digit);
	}
	_putchar('\n');
}
