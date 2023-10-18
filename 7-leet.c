#include "main.h"

/**
 * leet -  encodes a string into 1337.
 *
 * @s: The String will be encoded
 *
 * Return: The string that has been encoded
*/

char *leet(char *s)
{
	char leet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == leet[y])
			{
				s[x] = nums[y];
				break;
			}
		}
		x++;
	}
	return (s);
}
