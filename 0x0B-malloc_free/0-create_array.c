#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character to be used to initialize the array
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size <= 0)
	{
		return (NULL);
	}
	/*allocating memory*/
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	/*initialize with a character*/
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
