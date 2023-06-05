#include "main.h"
/**
 * _strchr - finds the first occurrence of a character in a string
 * @s: pointer to the string
 * @c: character to be found
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	/* Iterate through the string */
	for (; *s != '\0'; s++)
	{
		/* Check if current character matches the target character */
		if (*s == c)
		{
			return (s);
		}
	}
	/* Check if null terminator matches the target character */
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
