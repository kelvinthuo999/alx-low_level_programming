#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print to number 98
 * @n: input number n
 */
void print_to_98(int n)
{
	/* checking if the number is greater than 98 */
	if (n > 98)
	{
		/* using a while loop to print upto 98 */
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	/* checking if the number is less than 98 */
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}

