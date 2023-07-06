#include "main.h"

/**
 * set_bit - Sets the bit to 1 at a given index
 * @n: The number
 * @index: The index to set the bit
 *
 * Return: 1 if successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = (sizeof(unsigned long int) * 8) - 1;

	if (index > max_index)
		return (-1);

	*n |= (1ul << index);
	return (1);
}
