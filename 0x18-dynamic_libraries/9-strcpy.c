#include "main.h"

/**
 * _strcpy - Copies content of one array to another
 * @dest: pointer to the destination address
 * @src: pointer to the source address
 * Return: address of the destination array
 */

char *_strcpy(char *dest, char *src)
{
	/* variable declaration and initialization */
	int index = 0;
	int len = 0;

	/* determine the length of the source string */
	while (src[len] != '\0')
	{
		len++;
	}
	/* using a while loop to copy the contents of one array to the other */
	while (index <= len)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
