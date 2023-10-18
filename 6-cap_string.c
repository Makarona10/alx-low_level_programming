#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: The String will be Capitalized
 *
 * Return: The string that has been capitalized
*/

char *cap_string(char *s)
{
	int x = 0;
	int y;
	char sep[] = {'\t', '\n', ' ', '.', ';',
		'!', '(', ')', '{', '}', ',', '?', '"'};
	int isSep;

	while (s[x] != '\0')
	{
		isSep = 0;
		if (s[x] > 96 && s[x] < 123)
		{
			for (y = 0; y < 13; y++)
			{
				if (s[x - 1] == sep[y])
				{
					isSep = 1;
					break;
				}
			}
			if (isSep == 1 || x == 0)
			{
				s[x] = s[x] - 32;
			}
		}
		x++;
	}
	return (s);
}

