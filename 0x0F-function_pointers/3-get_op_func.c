#include "3-calc.h"

/**
 * get_op_func - selects the correct function for execution
 * @s: input parameter
 *
 * Return: pointer to the appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{'+', op_add}, /* Addition operator */
		{'-', op_sub}, /* Subtraction operator */
		{'*', op_mul}, /* Multiplication operator */
		{'/', op_div}, /* Division operator */
		{'%', op_mod}, /* Modulo operator */
		{0, NULL}
	};

	while (ops[i].op != 0) /* Iterate through the ops array */
	{
		if (ops[i].op == *s && *(s + 1) == '\0')
			return (ops[i].f); /* Return the appropriate function */

		i++;
	}

	return (NULL);
}
