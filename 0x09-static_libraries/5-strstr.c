#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the first occurrence of the substring in the string,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (0);
}
