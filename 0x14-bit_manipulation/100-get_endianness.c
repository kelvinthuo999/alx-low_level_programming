#include "main.h"

/**
 * get_endianness - Checks for endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *check = (char *)&i;

	if (*check == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
