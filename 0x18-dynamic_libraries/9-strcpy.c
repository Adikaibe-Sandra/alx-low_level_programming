#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: source
 *
 * Return: d
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
