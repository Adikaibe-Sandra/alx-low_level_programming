#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
