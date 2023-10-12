#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: void
*/

void print_numbers(void)
{
	for (int x = 0; x <= 9; x++)
	{
		x = x + '0';
		_putchar(x + '0');
	}
	_putchar('\n');
}
