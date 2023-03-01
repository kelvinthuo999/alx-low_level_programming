#include "main.h"

/**
 * *leet - a function to encode
 * @ch: pointer to character
 * Return: char
 */

char *leet(char *ch)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(n + j);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (ch);
}
