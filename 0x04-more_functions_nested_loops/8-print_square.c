#include "main.h"

/**
 * print_square - Print a square in terminal;
 *
 * @size: the length of the square side
 *
 * Return: void
*/

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y  = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
