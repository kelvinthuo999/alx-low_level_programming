#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate substring
 * @haystack: input string
 * @needle: input substring
 *
 * Description: Locates the first occurrence of the substring needle
 * within the string haystack.
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		if (*h == *n)
		{
			char *first = h;
			char *compare_h = h;
			char *compare_n = n;

			while (*compare_h && *compare_n && *compare_h == *compare_n)
			{
				compare_h++;
				compare_n++;
			}

			if (!*compare_n)
				return (first);
		}

		h++;
	}

	return (NULL);
}
