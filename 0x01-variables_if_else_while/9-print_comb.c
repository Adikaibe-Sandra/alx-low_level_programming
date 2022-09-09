#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible combinations of single-digit numbers'
 * Return: Always (Success);
 */
int main(void)
{
	int c;

	for (c = '48'; c <= '57'; c++)
	{
		putchar(c);

		if (c != '57')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
