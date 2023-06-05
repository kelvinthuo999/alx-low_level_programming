#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: matrix representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	/* Initialize variables */
	int i = 0;
	int j = 0;
	char *ptr = (char *)a;

	/* Traverse rows */
	while (i < 8)
	{
		/* Traverse columns */
		j = 0;
		while (j < 8)
		{
			/* Print the current chessboard element */
			_putchar(*(ptr + i * 8 + j));
			j++;
		}
		/* Move to the next line after printing a row */
		_putchar('\n');
		i++;
	}
}
