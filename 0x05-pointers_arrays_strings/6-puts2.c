#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	/* variable declaration and initialization */
	int index = 0;

	/* using a while loop to traverse the string */
	while (str[index] != '\0')
	{
		if (index % 2 == 0) /* determine the even position character of a string */
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
