#include "main.h"

/**
 * _strlen - Get the length of a string
 * @s: Pointer to a string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to a string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		{
			return (0); /* Not a palindrome */
		}
		start++;
		end--;
	}

	return (1); /* Palindrome */
}
