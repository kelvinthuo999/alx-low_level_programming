#include "main.h"

/**
 * _pow_recursion - Function to return the value of x raised to the power of y
 * @x: first integer
 * @y: second integer
 * Return: Integer(solution to x to the power y)
 */

int _pow_recursion(int x, int y)
{
	/* setup the base conditions */
	if (y < 0)
	{
		return (-1);
	}
	/* any number to the power of 0 is always 1 */
	else if (y == 0)
	{
		return (1);
	}
	/* write the recursive function */
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
