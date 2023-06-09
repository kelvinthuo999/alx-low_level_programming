#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative value if s1 < s2, positive value if s1 > s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	/* iterate over the strings until the characters differ or reach the end */
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	/* Return the difference between the characters at the differing position */
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
