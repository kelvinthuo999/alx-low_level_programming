#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	/* variable declaration and initialization */
	char *start = s; /* Pointer to the start of the string */
	char *end = s;   /* Pointer to the end of the string */

	if (s)
	{
		/* Find the length of the string */
		while (*end)
			end++;
		end--;

		/* Swap characters from start and end until they meet in the middle */
		while (start < end)
		{
			char temp = *start;
			*start = *end;
			*end = temp;

			start++;
			end--;
		}
	}
}
