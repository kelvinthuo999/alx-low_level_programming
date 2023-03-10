#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: variable containing number of arguments
 * @argv: character variable with the string values of argc
 * @Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
