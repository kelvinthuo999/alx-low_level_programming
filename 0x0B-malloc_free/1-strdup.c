#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: The duplicated string or NULL if allocation fails or str is NULL.
 */

char *_strdup(char *str)
{
	/* declare and initialize variables and pointer to array */
	unsigned int idx;
	unsigned int len = 0;
	char *pta;

	/* check to see if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		/* determine the length of str */
		while (str[len] != '\0')
		{
			len++;
		}
		/* allocate memory */
		pta = malloc(sizeof(char) * (len + 1));
		if (pta == NULL)
		{
			return (NULL);
		}
		else
		{
			/* copy str */
			for (idx = 0; idx < len; idx++)
			{
				pta[idx] = str[idx];
			}
			/* return pointer to pta */
			return (pta);
		}
	}
}
