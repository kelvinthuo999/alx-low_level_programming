#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: The binary number as a string
 *
 * Return: The unsigned int equivalent of the binary number,
 *         or 0 if the input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		value = (value << 1) + (*b - '0');
	}

	return (value);
}
