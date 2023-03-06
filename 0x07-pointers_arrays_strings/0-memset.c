#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: pointer to memory area to be filled
 * @n: the number of bytes to fill
 * @b: constant byte
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
