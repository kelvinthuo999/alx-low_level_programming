#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: string to be halved
 */

void puts_half(char *str)
{
	/* variable declaration and initialization */
	int index = 0;
	int start;

	/* determine the length of the string */
	while (str[index] != '\0')
	{
		index++;
	}
	/* check if the length is odd or even */
	if (index % 2 == 0)
	{
		start = index / 2;
	}
	else
	{
		start = (index + 1) / 2;
	}
	/* print the last section of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
