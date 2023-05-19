#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digits from 0 to 10
 * Return: 0(success)
 */

int main(void)
{
	int number;

	/* using a for loop to print the numbers */
	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
