#include "main.h"
/**
 * main - Entry point
 * Description: 'Prints _putchar, followed by a new line'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
