#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: A pointer to the bit
 * @index: The index to set the value at - indice start at 0
 *
 * Return: -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
