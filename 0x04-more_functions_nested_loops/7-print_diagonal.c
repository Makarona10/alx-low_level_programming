#include "main.h"

/**
 * print_diagonal - Print a diagonal line in terminal;
 *
 * @n: number of lines will be printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
