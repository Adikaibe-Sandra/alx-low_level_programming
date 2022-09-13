#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times abc
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c, n;

	for (n = 0; n <= 10; n++)

	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
