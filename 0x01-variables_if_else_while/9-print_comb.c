#include <stdio.h>

/**
 * main - Print combination of numbers
 * Return: 0(success)
 */

int main(void)
{
	int number;

	/* using a for loop to print combination of numbers */
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
