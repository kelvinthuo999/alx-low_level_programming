#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (aux < i)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
}
