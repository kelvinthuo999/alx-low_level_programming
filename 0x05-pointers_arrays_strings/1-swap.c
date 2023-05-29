#include "main.h"

/**
 * swap_int - Swap value held in different variables
 * @a: pointer to first variable
 * @b: pointer to second variable
 */

void swap_int(int *a, int *b)
{
	/* value swap */
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
