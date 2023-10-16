#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * with the first character followed by a new line.
 *
 * @s: string argument will be used in print operation
 *
 * Return: void
*/


void puts2(char *s)
{
	int x = 0;

	while (*(s + x) != 0)
	{
		if (x % 2 == 0)
			_putchar(*(s + x));

		x++;
	}
	_putchar('\n');
}
