#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: The destination that src will be added to
 *
 * @src: The string will be added
 *
 * Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int y = 0;

	while (dest[i] != '\0')
		i++;

	while (src[y] != '\0')
	{
		dest[i++] = src[y++];
	}
	dest[i] = '\0';
	return (dest);
}
