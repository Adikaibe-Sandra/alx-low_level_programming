#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integer
 * @size: numbers of elements in array
 * @cmp: pointer to functions to compare value
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
