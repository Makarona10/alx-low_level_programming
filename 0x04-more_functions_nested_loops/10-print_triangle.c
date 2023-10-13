#include "main.h"

/**
 * print_triangle - prints a triangle in terminal
 *
 * @size: The length of the triangle side
 *
 * Return: void
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 0; y < (size - x); y++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
			}
	}
	else
		putchar('\n');
}
