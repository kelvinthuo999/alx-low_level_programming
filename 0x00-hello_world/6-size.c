#include <stdio.h>

/**
 * main - starting point
 *
 * Return: 0(success)
 */

int main(void)
{
	char a;
	int x;
	long xy;
	long long xyz;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(xy));
	printf("Size of a long long int: %d byte(s)\n", sizeof(xyz));
	printf("Size of a float: %d byte(s)", sizeof(f));
	return (0);
}
