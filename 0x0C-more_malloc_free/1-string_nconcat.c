#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * Return: Pointer to the address of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declarations and initialization */
	unsigned int idx1;
	unsigned int idx2;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *pta;

	/* check if the strings passed are NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* determine the length of both strings */
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	/* allocate memory for new string */
	pta = malloc(sizeof(char) * (len1 + n  + 1));
	/* check if pta is NULL */
	if (pta == NULL)
		return (NULL);
	/* concatenate the two string */
	else
	{
		for (idx1 = 0; idx1 < len1; idx1++)
		{
			pta[idx1] = s1[idx1];
		}
		for (idx2 = 0; idx2 < n; idx1++, idx2++)
		{
			pta[idx1] = s2[idx2];
		}
		pta[idx1] = '\0';
		return (pta);
	}
}
