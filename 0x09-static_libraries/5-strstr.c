#include "main.h"

/**
 * _strstr - finds the first occurrence
 * of the substring needle in the string haystack
 *
 * @haystack: The string should contain the substring
 *
 * @needle: The substring should be found
 *
 * Return: a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y;

	while (haystack[x] != '\0')
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x] == needle[y])
				x++;
			else
			{
				x++;
				break;
			}
		}
		if (needle[y] == '\0')
			return (haystack + (x - y));
	}
	return (NULL);
}
