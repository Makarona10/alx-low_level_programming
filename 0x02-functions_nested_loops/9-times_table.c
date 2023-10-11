#include "main.h"

/**
 * times_table - Function Prints 9 times-table starting with 0
 *
 * Return:  void
*/

void times_table(void)
{
	int x, z, num;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			num = x * z;
			if (num > 9)
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			if (num <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			_putchar(',');
		}
		_putchar('\n');
	}
}
