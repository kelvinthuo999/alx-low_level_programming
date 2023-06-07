#include "main.h"

/**
 * factorial - Evaluates the factorial of a given number
 * @n: Given number
 * Return: Integer(factorial of the given number)
 */

int factorial(int n)
{
	/* set the base condition */
	if (n == 1)
	{
		return (1);
	}
	/* set another check condition for negative number */
	else if (n < 0)
	{
		return (-1);
	}
	/* set the recursive function */
	else
	{
		return (n * factorial(n - 1));
	}
}
