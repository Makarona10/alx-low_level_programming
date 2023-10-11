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

	for (x = n; x < 99; x++)
	{
		if (x > n)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (x <= 9)
		{
			_putchar(x + '0');
		}
		else
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
	}
}
