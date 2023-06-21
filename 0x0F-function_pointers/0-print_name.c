#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input parameter for the name
 * @f: function pointer that takes a char pointer as a parameter
 *
 * Description: This function takes a name and a function pointer as input.
 *              If both parameters are not NULL, it calls the function pointer
 *              with the name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if name and f are not NULL */
	if (name != NULL && f != NULL)
	{
		/* Call the function pointer with the name as an argument */
		(*f)(name);
	}
}
