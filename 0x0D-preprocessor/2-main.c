#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always success
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
