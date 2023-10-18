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
	int eql = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eql = (int)(*s1 - 48) - (int)(*s2 - 48);
			break;
		}
		*s1++;
		*s2++;
	}

	return (eql);
}
