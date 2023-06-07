#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: The number.
 * @start: integer to point to the start
 * @end: integer pointing to the end
 *
 * Return: The square root of the number, or -1 if no square root exists.
 */

int sqrt_helper(int n, int start, int end);
int _sqrt_recursion(int n)
{
	/* Check if the number is negative */
	if (n < 0)
		return (-1);

	/* Call the helper function to calculate the square root */
	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number.
 * @start: integer to point to the start
 * @end: integer to point to the end
 *
 * Return: The square root of the number, or -1 if no square root exists.
 */

int sqrt_helper(int n, int start, int end)
{
	/* variable declaration and initialization */
	int mid = (start + end) / 2;
	int square = mid * mid;

	/* Base case: square root does not exist */
	if (start > end)
		return (-1);
	/* Base case: square root found */
	if (square == n)
		return (mid);

	/* Continue searching in the upper half */
	if (square < n)
		return (sqrt_helper(n, mid + 1, end));

	/* Continue searching in the lower half */
	return (sqrt_helper(n, start, mid - 1));
}
