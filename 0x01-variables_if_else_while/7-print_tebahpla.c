#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0)success
 */

int main(void)
{
	char rev = 'z';

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
