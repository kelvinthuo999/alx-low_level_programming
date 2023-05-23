#include <stdio.h>

/**
 * main - Calculates the sum of the multiples of 3 and 5 upto 1024
 * Return: Always 0.
 */

int main(void)
{
	/* variable declaration and initialization */
	int num;
	int sum = 0;

	/* using a combination of if statements and for loop */
	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5 == 0))
		{
			sum += num
		}
	}
	printf("%d\n", sum);
	return (0);
}
