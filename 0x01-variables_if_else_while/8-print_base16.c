#include <stdio.h>

/**
 * main - Prints hexadecimal numbers
 * Return: 0(success)
 */

int main(void)
{
	int number;
	char alpha;

	/* print 0 to 9 in decimal then 'a' to 'f' */
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
