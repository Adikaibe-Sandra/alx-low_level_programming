#include "studio.h"
/**
 * main - Entry point
 * Description - 'Prints the alphabet, in lowercase, followed by a new line'
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar('\n');
	return (0);
}
