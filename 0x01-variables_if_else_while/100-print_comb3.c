#include <stdio.h>
/**
 * main - Print combinations of digit
 * Return: 0(success)
 */

int main(void)
{
	int digit1, digit2;

	/* use two for loops to print combination of digits */
	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);
			/* code to place comma and space */
			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
