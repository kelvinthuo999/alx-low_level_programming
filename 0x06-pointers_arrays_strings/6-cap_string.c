#include "main.h"

/**
 * cap_string - Capitalize string
 * @string: Input string
 *
 * Description: Capitalizes all words of a string
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *string)
{
	int index;

	/* Capitalize first letter of the string */
	if (string[0] >= 'a' && string[0] <= 'z')
	{
		string[0] = string[0] - ' ';
	}

	/* Iterate through each character of the string */
	for (index = 0; string[index] != '\0'; index++)
	{
		/* Check for word separators and capitalize next letter */
		if (string[index] == ' ' || string[index] == '.' || string[index] == '\t'
			|| string[index] == '\n' || string[index] == ','
			|| string[index] == ';' || string[index] == '!'
			|| string[index] == '?' || string[index] == '('
			|| string[index] == ')' || string[index] == '{' || string[index] == '}')
		{
			if (string[index + 1] >= 'a' && string[index + 1] <= 'z')
			{
				string[index + 1] = string[index + 1] - ' ';
			}
		}
	}
	return (string);
}
