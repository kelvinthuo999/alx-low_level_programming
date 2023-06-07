#include "main.h"

/**
 * _strlen_recursion - Determines the length of a string
 * @s: string to be evaluated
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	/* set the base condition */
	if (*s == '\0')
	{
		return (0);
	}
	/* set the recursive function */
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
