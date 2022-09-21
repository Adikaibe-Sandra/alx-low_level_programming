#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @p: The string will be modified
 *
 * Return: char var
 */
char *string_toupper(char *p)
{
	int index = 0;

	while (p[index++])
	{
		if (p[index] >= 'a' && p[index] <= 'z')
			p[index] -= 32;
	}
	return (p);
}
