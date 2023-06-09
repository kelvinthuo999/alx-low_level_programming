#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: (0) on success, (1) if invalid input
 */
int main(int argc, char *argv[])
{
	int amount, idx, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (idx = 0; idx < num_denominations; idx++)
	{
		coins += amount / denominations[idx];
		amount %= denominations[idx];
	}

	printf("%d\n", coins);
	return (0);
}
