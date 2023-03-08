#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
