#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s - memory area to fill
 * @b - constant byte to fill
 * @n - bytes of memory area to fill
 *
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{s[n - 1] = b;
		n--;
	}
	return (s);
}

