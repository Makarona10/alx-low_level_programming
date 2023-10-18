#include "main.h"

/**
 * _strncat - concatenates two strings with limit of chars
 *
 * @dest: The destination that src will be added to
 *
 * @src: The string will be added
 *
 * @n: The number of strings will be added
 *
 * Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		*(dest + x + y) = *(src + y);
	}
	dest[x + y] = '\0';

	return (dest);
}
