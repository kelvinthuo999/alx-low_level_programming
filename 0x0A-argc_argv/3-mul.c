#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Calculates the product of two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of num1 and num2.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	/* Check if the program received the correct number of arguments */
	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		/* Convert the arguments from strings to integers */
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		/* Calculate the product using the multiply function */
		prod = multiply(num1, num2);

		/* Print the product */
		printf("%d\n", prod);
	}
	return (0);
}
