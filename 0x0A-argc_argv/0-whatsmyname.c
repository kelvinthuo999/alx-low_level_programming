#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: A program that prints its name.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}

	return (0);
}
