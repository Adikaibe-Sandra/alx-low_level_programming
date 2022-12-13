#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurrence of the character c in a string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
