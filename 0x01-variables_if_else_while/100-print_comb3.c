#include <stdio.h>
/**
 * main - Entry point
 * Description:'prints all possible different combinations of two digits'
 * Return: Always (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = '0'; digit2 <= '9'; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);

				if (digit1 != '8' || (digit1 == '8' && digit2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
