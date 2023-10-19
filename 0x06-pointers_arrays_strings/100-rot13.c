#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 *
 * @s: The string will be encoded
 *
 * Return: The String's been encoded
*/

char *rot13(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		while ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] >= 'a' && s[x] <= 'm') || (s[x] >= 'A' && s[x] <= 'M'))
				s[x] += 13;

			else
				s[x] -= 13;
			x++;
		}
		x++;
	}
	return (s);
}
