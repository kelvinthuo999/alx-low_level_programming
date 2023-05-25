#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14
 */

void more_numbers(void)
{
	/* variable declaration */
	int ten_times, numbers;

	/* using nested for loops to complete the task */
	for (ten_times = 0; ten_times < 10; ten_times++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + '0');	/* print the tens digit */
			}
			_putchar((numbers % 10) + '0');	/* print the ones digit */
		}
		_putchar('\n');
	}
}
