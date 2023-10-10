#include "main.h"

/**
 * print_last_digit - Function returns the last digit of an input
 *
 * @x: The integer number will be used
 *
 * Return:  the last digit of the input
 *
*/

int print_last_digit(int x)
{
	int last_dig;

	if (x < 0)
	{
		last_dig = -1 * (x % 10);
	}
	else
	{
		last_dig = x % 10;
	}

		putchar(last_dig + '0');
		return (last_dig);
}
