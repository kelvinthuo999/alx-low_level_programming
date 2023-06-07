#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string to be printed in reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	/* set the base condition */
	if (*s == '\0')
	{
		return;
	}
	/* set the recursive function */
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
