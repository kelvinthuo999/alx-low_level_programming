#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* variable declaration and initialization */
	int index = 0;

	/* copy characters from src to dest until n bytes or null terminator is reached */
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	/* If the number of characters copied is less than n, pad remaining bytes with null terminator */
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
