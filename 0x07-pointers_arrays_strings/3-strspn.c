#include "main.h"

/**
 * _strspn - gets length
 * @s: input string
 * @accept: accepted characters
 *
 * Description: gets the length of a prefix substring
 *              consisting only of bytes from accept
 *
 * Return: number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int idx = 0;

	/* Iterate through the string s */
	while (s[len] != '\0')
	{
		/* Iterate through the accept string */
		while (accept[idx] != '\0')
		{
			/* Check if the current character matches */
			if (s[len] == accept[idx])
			{
				break;
			}

			idx++;
		}
		/* Break if no match is found in accept */
		if (accept[j] == '\0')
		{
			break;
		}
		len++;
	}
	return (len);
}
