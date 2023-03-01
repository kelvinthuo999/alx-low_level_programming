#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int num = 0;

	init = a;
	final = a;
	n--;

	while (i < n)
	{
		i++;
	}
	while (j <= i)
	{
		num = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = num;
		j++;
		i--;
	}
}
