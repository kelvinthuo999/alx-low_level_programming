#include "main.h"

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: the number to compute the square root of
 * Return: the square root of n, or -1 if it does not have natural square root
 */
int sqrt_helper(int n, int start, int end);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - helper function for computing the square root recursively
 * @n: the number to compute the square root of
 * @start: the starting point for the search
 * @end: the ending point for the search
 * Return: the square root of n, or -1 if it does not have natural square root
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;
	int quotient = n / mid;
	int diff = quotient - mid;

	if (start > end)
		return (-1);

	if (diff == 0)
		return (mid);
	else if (diff < 0)
		return (sqrt_helper(n, start, mid - 1));
	else
		return (sqrt_helper(n, mid + 1, end));
}
