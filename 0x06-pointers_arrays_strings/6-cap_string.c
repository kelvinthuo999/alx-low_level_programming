#include "main.h"

/**
 * *cap_string - capitalize all words
 * @ch: pointer to character
 * Return: char
 */

char *cap_string(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (i == 0 && (*(ch + i) >= 97 && *(ch + i) <= 122))
		{
			*(ch + i) = *(ch + i) - ' ';
			i++;
		}
		if (*(ch + i) == ' ' || *(ch + i) == '\n' || *(ch + i) == '\t'
		    || *(ch + i) == ',' || *(ch + i) == ';' || *(ch + i) == '!'
		    || *(ch + i) == '?' || *(ch + i) == '"' || *(ch + i) == '('
		    || *(ch + i) == ')' || *(ch + i) == '{' || *(ch + i) == '}'
		    || *(ch + i) == '.')
		{
			i++;
			if (*(ch + i) >= 97 && *(ch + i) <= 122)
			{
				*(ch + i) = *(ch + i) - ' ';
			}
		}
		else
			i++;
	}
	return (ch);
}
