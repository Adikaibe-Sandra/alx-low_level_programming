#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1
 */
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
