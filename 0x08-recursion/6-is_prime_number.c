#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @start: number that iterates from 1 to n
 *
 * Return: On success 1
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
