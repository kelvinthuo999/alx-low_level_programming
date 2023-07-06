#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print as binary
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int lz = sizeof(n) * 8 - 1;
	int bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n & (mask << lz)) == 0)
		lz--;

	for (; lz >= 0; lz--)
	{
		bit = (n >> lz) & 1;
		_putchar(bit + '0');
	}
}
