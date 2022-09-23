#include "main.h"
include < stdio.h >

/**
 * rot13 - encodes a string using rot13
 * @s: the string targeted
 *
 * Return: returns the encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[0] != '\0')
	{
		s[i] = transform_2(s[i]);
		i++;
	}
	return (s);
}
