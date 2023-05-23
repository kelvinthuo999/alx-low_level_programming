#include "main.h"

/**
 * print_alphabet - Print the alphabets
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	/* using a for loop to print the letters in order */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
