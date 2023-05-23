#include "main.h"

/**
 * _isalpha - Check if a letter is uppercase
 * @c: letter to be checked
 * Return: 1(success), otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
