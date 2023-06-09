#include "main.h"

/**
 * _islower - Checks if a letter is lowercase
 * @c: letter to be checked
 * Return: 1(success), otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
