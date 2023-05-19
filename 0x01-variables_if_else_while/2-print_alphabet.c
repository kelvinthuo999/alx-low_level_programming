#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabets
 * Return: 0(success)
 */

int main(void)
{
	char alphabet;

	/* using for loop to iterate over the alphabetical order */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
