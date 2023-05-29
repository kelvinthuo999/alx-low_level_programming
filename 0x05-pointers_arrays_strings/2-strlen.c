#include "main.h"

/**
 * _strlen - Determines the length of a string
 * @s: pointer of the string to be measured
 * @len: integer representation of the length of the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	/* variable declaration and initialization */
	int len = 0;
	
	/* using a while loop to traverse the string and determine the length */
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
