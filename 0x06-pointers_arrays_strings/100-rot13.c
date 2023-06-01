#include "main.h"

/**
 * rot13 - encode string to rot13
 * @s: the string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int index1, index2;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* Iterate through each character in the string */
	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		/* Check if the character is alphabetical */
		if ((s[index1] >= 'a' && s[index1] <= 'z') || (s[index1] >= 'A' && s[index1] <= 'Z'))
		{
			/* Iterate through the rot13 encoding arrays */
			for (index2 = 0; index2 < 52; index2++)
			{
				/* Match the character to its corresponding rot13 encoded character */
				if (s[index1] == a[index2])
				{
					/* Replace the character with its rot13 encoded counterpart */
					s[index1] = b[index2];
					break;
				}
			}
		}
	}

	return (s);  /* Return the encoded string */
}

