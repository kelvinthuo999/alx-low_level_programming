#include "main.h"

/**
 * _memcpy - Copies a block of memory
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* initialize a variable to store the address of the destination memory */
	char *start_dest = dest;

	/* Copy 'n' bytes from source memory to destination memory */
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	/* Return the starting address of the destination memory */
	return (start_dest);
}
