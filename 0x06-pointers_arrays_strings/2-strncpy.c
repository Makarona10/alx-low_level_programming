#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: The destination that the string will be copied to
 *
 * @src: The string will be copied
 *
 * @n: The length of chars will be copied
 *
 * Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		*(dest + y) = *(src + y);
	}
	dest[y] = '\0';

	return (dest);
}
