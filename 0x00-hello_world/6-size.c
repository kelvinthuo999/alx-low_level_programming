#include <stdio.h>

/**
 * main - Starting point of the program
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/* using sizeof operator to determine the sizes of the data types above */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
