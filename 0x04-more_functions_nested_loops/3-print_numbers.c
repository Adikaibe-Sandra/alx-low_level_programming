#include "main.h"

/**
 * print_numbers - that prints the numbers from
 * 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
