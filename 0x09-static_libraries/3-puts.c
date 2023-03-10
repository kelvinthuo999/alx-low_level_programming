#include "main.h"

/**
 * _puts - prints out a string
 * @str: pointer to a string
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
