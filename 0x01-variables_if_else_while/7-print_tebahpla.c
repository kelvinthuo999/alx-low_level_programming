#include <stdio.h>

/**
 * main - Prints the alphabetical letters in reverse order
 * Return: 0(success)
 */

int main(void)
{
	char alphabet;

	/* using a for loop to iterate over the alphabetical order */
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
