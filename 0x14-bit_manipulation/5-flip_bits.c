#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: The number
 * @m: the number to flip n to
 *
 * Return: The necessary number of a bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (count);
}
