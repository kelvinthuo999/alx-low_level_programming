#include <stdio.h>

/**
 * main - FizzBuzz test
 * Return: 0(success)
 */

int main(void)
{
	/* variables declaration */
	int num;

	/* using a combination of if statements and loops to complete task */
	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
