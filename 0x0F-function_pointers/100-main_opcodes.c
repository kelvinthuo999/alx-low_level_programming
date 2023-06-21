#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function to print opcodes
 * @bytes: number of bytes to print
 */
void print_opcodes(int bytes)
{
	int i;
	unsigned char opcode;
	void (*address)() = print_opcodes;

	for (i = 0; i < bytes; i++)
	{
		opcode = *((unsigned char *)address);
		printf("%.2x", opcode);
		if (i != bytes - 1)
			printf(" ");
		address = (void (*)())((char *)address + 1);
	}
	printf("\n");
}

/**
 * main - entry point of the program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(bytes);

	return (0);
}
