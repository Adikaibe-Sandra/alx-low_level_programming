#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, followed by a new line'
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
