#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: The string will be printed
 *
 * Return: void
*/

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != 0)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
