#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	/* variable declaration and initialization */
	int index = 0;

	/* determine the length of the string using a while loop */
	while (s[index] != '\0')
	{
		index++;
	}
	/* print in reverse */
	while (index > 0)
	{
		_putchar(s[index - 1]);
		index--;
	}
	_putchar('\n');
}
