#include "main.h"

/**
 * _abs - Computer the absolute value of a number
 * @num: number to be evaluated
 * Return: 0(success)
 */

int _abs(int num)
{
	if (num < 0)	/* first check if the number is less than zero */
	{
		return (num * -1);
	}
	else	/* if the number is greater than zero, return it as it is */
	{
		return (num);
	}
	return (0);
}
