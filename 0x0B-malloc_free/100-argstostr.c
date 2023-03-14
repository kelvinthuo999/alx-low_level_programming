#include "main.h"

/**
 * argstostr - concatenate all arguments
 * @ac: number of arguments
 * @av: pointer to string of arguments
 * Return: pointer to the new concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int j;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j++])
		{
			len++;
		}
	}
	len++;
	ptr = malloc(sizeof(char) * (len + ac));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[len++] = av[i][j++];
		}
		ptr[len++] = '\n';
	}
	ptr[len] = '\0';
	return (ptr);
}
