#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: is the size
 * @action: is something
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
