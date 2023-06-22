#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters.
 * @n: Number of arguments
 *
 * Description: This function takes a variable number of arguments
 * and calculates the sum of all the arguments.
 * If the number of arguments is 0, it returns 0.
 *
 * Return: The sum of all the arguments, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum = 0;
	int num;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n); /* Initialize the va_list */
	for (i = 0; i < n; i++)
	{
		num = va_arg(arguments, int);  /* Retrieve the next argument */
		sum += num;                   /* Add the argument */
	}
	va_end(arguments);	/* Clean up the va_list */

	return (sum);
}
