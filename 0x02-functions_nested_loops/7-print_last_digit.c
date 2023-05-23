#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @num: the number to extract the last digit from
 * Return: the last digit.
 */

int print_last_digit(int num)
{
	/* declaration and initialization of variables */
	int last_digit = num % 10;

	/* using if state to check if the last digit is less than zero */
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
