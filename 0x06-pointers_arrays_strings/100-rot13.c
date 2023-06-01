#include "main.h"

/**
 * rot13 - encode string to rot13
 * @s: the string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int index1;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		int index2 = 0;
		while (a[index2] != '\0')
		{
			if (s[index1] == a[index2])
			{
				s[index1] = b[index2];
				break;
			}
			index2++;
		}
	}

	return s;
}

