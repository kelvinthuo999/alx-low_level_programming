#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to memory location
 * @str: string used to produce a copy
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	/*determine length of str*/
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	/*allocating memory*/
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*creating a copy*/
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
