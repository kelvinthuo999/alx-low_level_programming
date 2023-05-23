#include "main.h"

/**
 * jack_bauer - Prints every minute of Jack Bauer clock
 */
void jack_bauer(void)
{
	/* Declaration of variables */
	int hour, min;

	/* Nested for loops to print out the time */
	for (hour = 0; hour < 23; hour++)	/* used to iterate over the hours */
	{
		for (min = 0; min < 60; min++)	/* used to iterate over the mins */
		{
			_putchar(hour / 10 + '0');	/* prints the tens digit of the hour */
			_putchar(hour % 10 + '0');	/* prints the ones digit of the hour arm */
			_putchar(':');	/* prints the colon between the hour and min */
			_putchar(min / 10 + '0');	/* prints the tens digit of the min */
			_putchar(min % 10 + '0');	/* prints the ones digit of the min */
			_putchar('\n');
		}
	}
}
