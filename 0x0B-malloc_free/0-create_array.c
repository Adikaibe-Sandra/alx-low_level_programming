#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: number of element arrays
 * @c: char
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c);
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (Null);
	}
	arr = malloc(sizeof(char) * size);
	/* check if malloc was successful */

	if (arr == Null)
		return (Null);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
