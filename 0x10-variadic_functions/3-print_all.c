#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints values based on the given format.
 * @format: A list of types of arguments passed to the function.
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 *           Any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	float f;
	char *s;
	int print_comma = 0; /* Flag to indicate whether to print comma */

	va_list args;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i + 1] != '\0')
			print_comma = 1; /* Set flag to true for subsequent values */
		else
			print_comma = 0; /* Set flag to false for the last value */
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", print_comma ? ", " : "", c);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);
			printf("%s%d", print_comma ? ", " : "", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", print_comma ? ", " : "", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("%s(nil)", print_comma ? ", " : "");
			else
				printf("%s%s", print_comma ? ", " : "", s);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
