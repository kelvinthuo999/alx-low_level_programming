#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0)Success
 */

int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	small = 'A';

	while (small <= 'Z')
	{
		putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}
