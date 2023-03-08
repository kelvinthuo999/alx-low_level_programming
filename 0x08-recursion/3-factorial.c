#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number
 * Return: -1 on error, 1 for 0, and integer for success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
