#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to be printed
 */

void _puts(char *str)
{
	/* variable declaration and initialization */
	int index = 0;

	/* using a while loop to traverse the string */
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
