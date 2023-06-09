#include <stdio.h>
#include <stdlib.h>

int multiply(int num1, int num2);

/**
 * main - Entry point of the program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}

/**
 * multiply - Multiplies two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of the two numbers.
 */
int multiply(int num1, int num2)
{
	int result;

	result = num1 * num2;
	return (result);
}
