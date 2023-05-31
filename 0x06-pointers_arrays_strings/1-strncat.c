#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: String to be appended to
 * @src: String to append
 * @n: Number of bytes to use from src
 *
 * Return: Pointer to the resulting concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	/* pointer declaration and initialization */
	char *dest_start = dest;

	/* move dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* copy up to n bytes from src to the end of dest */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* append a null terminator */
	*dest = '\0';
	return (dest_start);
}

