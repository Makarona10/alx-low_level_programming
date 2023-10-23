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

	while (accept[x] != '\0')
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				return (s + y);
			}
		}
		x++;
	}
	return (NULL);
}
