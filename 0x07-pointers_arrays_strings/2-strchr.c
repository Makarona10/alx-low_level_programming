#include "main.h"

/**
 * _strchr - locates character in string
 *
 * @s: The string will be checked
 *
 * @c: The character will be located
 *
 * Return: The string after locating the character
*/

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}
	return (NULL);
}
