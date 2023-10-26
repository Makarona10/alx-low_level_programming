#include "main.h"

/**
 * _strcmp -  compares two strings
 *
 * @s1: The first string will be compared
 *
 * @s2: The second string will be compared
 *
 * Return: The difference between first two different chars
*/

int _strcmp(char *s1, char *s2)
{
	int cmp = 0;
	int x = 0;

	while (s1[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			cmp = s1[x] - s2[x];
			break;
		}
		x++;
	}
	return (cmp);
}

