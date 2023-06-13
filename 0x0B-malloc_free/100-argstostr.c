#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string.
 * @str: input string.
 *
 * Return: length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to a concatenated string of arguments.
 */
char *argstostr(int ac, char **av)
{
	int totalLength = 0;
	int i, j, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of concatenated string */
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		totalLength += _strlen(av[i]);
	}

	/* Allocate memory for the concatenated string */
	result = malloc((totalLength + ac + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}

	result[k] = '\0'; /* Add null terminator at the end */

	return (result);
}
