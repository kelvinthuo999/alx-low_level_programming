#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	/* Initialize variables */
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		/* Outputting the sum when no arguments are provided */
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/* Checking if each character in the argument is a digit */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				/* Printing an error message if a non-digit character is found */
				printf("Error\n");
				return (1);
			}
		}
		/* Converting the argument to an integer and adding it to the sum */
		sum += atoi(argv[i]);
	}

	/* Outputting the sum */
	printf("%d\n", sum);
	return (0);
}
