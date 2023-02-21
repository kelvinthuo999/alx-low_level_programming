#include "main.h"

/**
 * main - print alphabets
 *
 * Return: 0 on success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
