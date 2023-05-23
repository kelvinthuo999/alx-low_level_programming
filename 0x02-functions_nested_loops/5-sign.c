#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: number to be checked
 * Return: 1(positive), 0(zero), -1(negative)
 */

int print_sign(int n)
{
	if (n > 0)	/* check if it greater than 0 */
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)	/* check if the number is equal to 0 */
	{
		_putchar('0');
		return (0);
	}
	else	/* check for the remaining scenarios */
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
