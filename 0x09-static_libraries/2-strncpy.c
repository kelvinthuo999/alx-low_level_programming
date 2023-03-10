#include "main.h"

/**
 * *_strncpy - copies two strings
 * @dest: pointer to the destination char
 * @src: pointer to the source char
 * @n: bytes to be received
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
