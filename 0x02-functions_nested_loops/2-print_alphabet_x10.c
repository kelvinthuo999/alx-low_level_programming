#include "main.h"

/**
 * main - print alphabet ten times
 *
 * Return: 0 on success
 */

int main(void)
{
	int a = 0;
	char alpha;

	while (a < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		a++;
	}
	return (0);
}
