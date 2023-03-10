#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int num;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			num = *(s1 + i) - *(s2 + i);
			return (num);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			num = *(s1 + i) - *(s2 + i);
			return (num);
		}
		i++;
	}
	return (0);
}
