#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On success 1
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
