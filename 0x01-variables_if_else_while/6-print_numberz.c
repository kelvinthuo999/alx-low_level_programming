#include <stdio.h>

/**
 * main - Prints numbers using putchar function
 * Return: 0(success)
 */

int main(void)
{
	int number;

	/* using a for loop and putchar function to print the numbers */
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0'); /* conversion to meet ASCII requirement */
	}
	putchar('\n');
	return (0);
}
