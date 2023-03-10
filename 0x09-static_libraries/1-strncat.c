#include "main.h"

/**
 * *_strncat - function to concatenate two strings
 * @dest: pointer to the destination char
 * @src: pointer to the source char
 * @n: integer value
 * Return: bytes to be received
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
