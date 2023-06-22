#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a given separator
 * @separator: The separator string
 * @n: The number of arguments
 * @...: The variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
