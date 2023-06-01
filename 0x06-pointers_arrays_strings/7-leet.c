#include "main.h"

/**
 * leet - encode string to 1337
 * @s: the string
 * Return: 1337 string
 */
char *leet(char *s)
{
	int index1 = 0; /* Index for traversing the input string */
	int index2 = 0; /* Index for traversing the 'a' and 'b' arrays */
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; index2 <= 9; index2++)
		{
			if (s[index1] == a[index2])
			{
				s[index1] = b[index2]; /* Replace character with 1337 equivalent */
			}
		}
	}
	return (s);
}
