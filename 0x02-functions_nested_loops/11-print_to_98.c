#include "main.h"

/**
 * print_to_98 - Prints integers starting from the input to 98
 *
 * @n: The number the counter starts from
 *
 * Return: void
*/

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
	for (x = n; x < 99; x++)
	{
		if (x > n)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", x);
	}
	}
	if (n > 98)
	{
		for (x = n; x > 99; x--)
	{
		if (x < n)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", x);
	}
	}
	_putchar('\n');
}

