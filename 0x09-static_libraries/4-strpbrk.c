#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: The string will be trimmed if the searched byte were found
 *
 * @accept: The bytes the function will search for
 *
 * Return: The trimmed value if the bytes were found
 * and NULL if not
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;

	if (s == NULL || accept == NULL)
		return (NULL);

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
		x++;
	}
	return (NULL);
}
