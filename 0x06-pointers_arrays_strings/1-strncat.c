#include "main.h"
/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n:integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, a;

	a = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[a] != 0 && a < n)
	{
		dest[len] = src[a];
		++a;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}
