#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets ten times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	/* declaration of variables */
	int times;
	char letters;

	/* using nested for loops to print the alphabet ten times */
	for (times = 0; times < 10; times++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
