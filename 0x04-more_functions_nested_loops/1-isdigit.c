#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: character to be checked
 * Return: 1(is a digit), 0(otherwise)
 */

int _isdigit(int c)
{
	/* using if statement to check */
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
