#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*determine size of the two strings*/
	size1 = size2 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	size2++;
	/*allocate memory for the concatenated string*/
	ptr = malloc(sizeof(char) * (size1 + size2));
	if (ptr == NULL)
		return (NULL);
	/*concatenate the two strings*/
	i = j = 0;
	while (i < size1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j <= size2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
