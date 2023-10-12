#include "main.h"

/**
 * print_line - Print a line in terminal;
 *
 * @n: The length of the line
 *
 * Return: void
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1;  x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
