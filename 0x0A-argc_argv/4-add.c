#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: Adds all positive numbers and prints the sum.
 * Return: (0) for success, (1) for error
 */
int main(int argc, char *argv[])
{
	int idx, num;
	int sum = 0;
	int error = 0;

	/* Loop through the arguments */
	for (idx = 1; idx < argc; idx++)
	{
		num = atoi(argv[idx]);

		/* Check if the number is positive */
		if (num <= 0)
		{
			error = 1;
			break;
		}
		sum += num;
	}

	/* Check if any non-positive number was detected */
	if (error)
	{
		printf("Error\n");
		return (1);
	}
	/* Print the sum of positive numbers */
	printf("%d\n", sum);
	return (0);
}
