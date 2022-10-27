#include <unistd.h>
#include "main.h"
#include <limits.h>

/**
 * print_binary - print an unsigned int in binary
 * @n: The number to the printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
