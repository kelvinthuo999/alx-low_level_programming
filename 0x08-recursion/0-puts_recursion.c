#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	/* set base condition */
	if (*s == '\0')
	{
		_putchar('\n');
	}
	/* set the recursive function to print */
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
