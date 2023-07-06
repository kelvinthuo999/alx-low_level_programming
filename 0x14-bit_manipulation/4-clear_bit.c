#include "main.h"

/**
 * clear_bit - Clears the bit at a given index to 0
 * @n: Pointer to the number
 * @index: The index to clear the bit
 *
 * Return: 1 if successful, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = (sizeof(*n) * 8) - 1;

	if (index > max_index)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
