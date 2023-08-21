#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - finds the first occurrence of any character from `accept` in `s`
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: pointer to the first occurrence of a matching character,
 *         or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int map[256] = {0}; /* Create a mapping of characters in `accept` */

	/* Set the corresponding indices to 1 in the mapping array */
	while (*accept)
	{
		map[(unsigned char)(*accept)] = 1;
		accept++;
	}

	/* Iterate over `s` and return the first matching character */
	while (*s)
	{
		if (map[(unsigned char)(*s)] == 1)
			return (s);
		s++;
	}

	return (NULL); /* No match found */
}
