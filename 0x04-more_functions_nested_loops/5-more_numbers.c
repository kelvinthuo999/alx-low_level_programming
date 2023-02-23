#include "main.h"

/**
 * more_numbers - print a set of numbers ten times
 * Return: numbers printed ten times
 */

void more_numbers(void)
{
	int num;
	int digit = 0;

	while (digit <= 9)
	{
		num = 0;

		while (num <= 14)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		digit++;
	}
}
