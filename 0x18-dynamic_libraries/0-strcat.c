#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source that is to be appended
 * Return: Pointer to the resulting concatenated string
 */

char *_strcat(char *dest, char *src)
{
	/* pointer declaration and initialization */
	char *dest_start = dest;

	/* move dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* copy the src string to the end of dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* append a null character at the end */
	*dest = '\0';

	return (dest_start);
}
