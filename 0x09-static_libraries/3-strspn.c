#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The prefix substring that we will get the length of it
 *
 * @accept: The string that it's bytes will be checked
 *
 * Return: The length of substring
*/

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (s[x] == accept[y])
		{
			x++;
		}
		else
			return (x);
	}
	return (x);
}
