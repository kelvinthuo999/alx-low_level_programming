#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This function prints the number of command line arguments
 *              received (excluding the program name itself).
 * Return: 0 for code success
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
