#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = n ^ m;
	unsigned int count = 0;

	while (flips > 0)
	{
		if (flips & 1)
			count++;
		flips >>= 1;
	}

	return (count);
}
