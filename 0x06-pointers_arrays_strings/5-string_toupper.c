#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @string: String to be changed
 * Return: Pointer to the changed string
 */

char *string_toupper(char *string)
{
	/* variable declaration */
	int index;

	/* for loop to traverse the string */
	for (index = 0; string[index] != '\0'; index++)
	{
		/* if statement to check if element is uppercase */
		if (string[index] >= 'a' && string[index] <= 'z')
		{
			string[index] = string[index] - ' ';
		}
	}
	return (string);
}
