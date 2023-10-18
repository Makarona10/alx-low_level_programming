#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: The String will be uppered
 *
 * Return: The string that has been uppered
*/

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
