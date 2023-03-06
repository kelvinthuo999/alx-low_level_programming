#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: a pointer to the first occurence of the character in the string
 * @s: Return NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
