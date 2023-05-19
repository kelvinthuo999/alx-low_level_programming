#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all alphabetic letters except q and e
 * Return: 0(success)
 */

int main(void)
{
	char alphabet;

	/* using for loop to iterate over the alphabetical order */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
