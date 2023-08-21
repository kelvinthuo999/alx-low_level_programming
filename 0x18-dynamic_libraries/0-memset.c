#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value
 * @s: Pointer to the memory block
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: Pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* declare and initialize a pointer to iterate over the memory block */
	char *ptr = s;

	/* Iterate until the desired number of bytes is reached */
	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	/* Return the pointer to the memory block */
	return (s);
}
