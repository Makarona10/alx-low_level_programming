#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 *
 * @s: The string will be reversed
 *
 * Return: void
*/

void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != 0)
	{
		x++;
	}

	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
