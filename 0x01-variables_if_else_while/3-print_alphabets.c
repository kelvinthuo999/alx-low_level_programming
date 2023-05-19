#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabets in lowercase and uppercase
 * Return: 0(success)
 */

int main(void)
{
	char low_alpha;
	char upper_alpha;

	/* using for loop to iterate over the alphabetical order */
	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		putchar(low_alpha);
	}
	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');
	return (0);
}
