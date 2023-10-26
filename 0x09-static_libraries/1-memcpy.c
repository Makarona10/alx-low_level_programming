#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @src: The memory area will be copied
 *
 * @dest: The destination memory area
 *
 * @n: Number characters will be copied to destination
 *
 * Return: The destination after updating
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
