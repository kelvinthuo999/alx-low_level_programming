#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 * @c: letter to be checked
 * Return: 1(uppercase), 0(otherwise)
 */

int _isupper(int c)
{
	/* using if statement to check */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
