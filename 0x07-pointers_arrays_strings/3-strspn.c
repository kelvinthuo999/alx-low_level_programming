#include "main.h"

/**
 * _strspn - gets length
 * @s: input string
 * @accept: accepted characters
 *
 * Description: gets the length of a prefix substring
 * Return: num of bytes in the initial seg of s
 * consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}

