#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 for 10 times;
 *
 * Return: void
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			z = y;
			if (y > 9)
			{
				z = y / 10;
			}
			putchar(z + '0');
			if (y > 9)
			{
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
	
}
