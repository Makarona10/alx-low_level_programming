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
	if (x < 0)
		x = x * -1;

	_putchar(x + '0');
	return (x % 10);
}
