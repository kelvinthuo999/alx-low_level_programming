#include "main.h"

/**
 * get_bit - Retrieves the bit at a given index
 * @n: The number
 * @index: The index to return the bit from
 *
 * Return: The bit value (0 or 1), or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_index = (sizeof(unsigned long int) * 8) - 1;

	if (index > max_index)
		return (-1);

	return ((n >> index) & 1);
}
