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

/**
 * transform_2 - helper function to map a letter with it's rot13 encoding
 * @x: char to be encoded
 *
 * Return: encoded char
 */

char transform_2(char x)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
