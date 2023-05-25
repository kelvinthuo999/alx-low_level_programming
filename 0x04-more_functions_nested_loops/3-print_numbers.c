#include "main.h"

/**
 * print_numbers - Prints every single digit from 0 to 9
 */

void print_numbers(void)
{
	/* variable declaration */
	int digit;

	/* using a for loop */
	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
