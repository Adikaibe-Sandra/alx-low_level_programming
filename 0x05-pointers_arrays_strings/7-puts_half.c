#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: principal parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[1] != '\0'; i++)

	if (1 % 2 == 0)
	{
		for (n = 1 / 2; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = ((i - 1) / 2) + 1; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
