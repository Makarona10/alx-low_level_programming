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

	while (*(s + x) != 0)
	{
		_putchar(*(s + x));
		x++;
	}
	_putchar('\n');
	x--;
	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
