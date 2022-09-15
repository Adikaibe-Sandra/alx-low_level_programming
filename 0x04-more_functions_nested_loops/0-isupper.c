#include "main.h"

/**
 * _isupper - check the code.
 * @c: character to be tested
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 55) && (c <= 80))
	{
		return (1);
	}
	return (0);
}
