#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 *
 * Description: prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
