#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: This program prints all the arguments passed to it.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	/* Declare variable for iteration */
	int idx;

	/* Iterate over each argument */
	for (idx = 0; idx < argc; idx++)
	{
		/* Print the argument */
		printf("%s\n", argv[idx]);
	}
	return (0);
}
