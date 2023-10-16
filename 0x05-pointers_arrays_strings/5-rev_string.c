#include "main.h"

/**
 * rev_string -  prints a string, in reverse, followed by a new line
 *
 * @s: The string will be reversed
 *
 * Return: void
*/

void rev_string(char *s)
{
	int x = 0;
	int y, indxs;

	while (*(s + x) != 0)
	{
		x++;
	}
	x--;
	indxs = x;
	char temp = 's';

	for (y = 0; y <= indxs; y++)
	{
		if (x > (indxs / 2))
		{
			temp = s[y];
			s[y] = s[x];
			s[x] = temp;
			x--;
		}
	}
}

