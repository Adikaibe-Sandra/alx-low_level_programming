#include "main.h"

/**
 * _isupper - check the code.
 * @c: character to be tested
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
