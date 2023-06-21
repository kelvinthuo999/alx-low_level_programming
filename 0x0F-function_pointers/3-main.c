#include "3-calc.h"

/**
 * main - Entry point. Performs simple operations.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	/* Variable declaration and initialization */
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int result;
	int (*ptf)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (ptf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptf(a, b);
	printf("%d\n", result);
	return (0);
}
