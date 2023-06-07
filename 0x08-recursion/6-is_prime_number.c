#include "main.h"

/**
 * is_prime - check if a number is prime
 * @num: input number
 * @divisor: divisor to check divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int num, int divisor)
{
	if (divisor <= 1)
		return (1);

	if (num % divisor == 0)
		return (0);

	return (is_prime(num, divisor - 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: input number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime(n, n / 2));
}
