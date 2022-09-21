#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r = 0;

	while (i)
	{
		if (sl[i] == '\0' && s2[i] == '\0')
			break;
		else if (sl[i] == '\0')
		{
			r = s2[i];
			break;
		}
		else if (sl[i] != s2[i])
		{
			r = sl[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (r);
}
