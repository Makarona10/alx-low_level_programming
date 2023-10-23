#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: The string will be inputted
 *
 * @b: the character will the place n times
 *
 * @n: Number of bytes will b take place
 *
 * Return: The String after replacing bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
