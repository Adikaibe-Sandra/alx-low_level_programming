#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: A pointer to the bit
 * @index: The index to set the value at - indices start at 0
 *
 * Return: if an error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
