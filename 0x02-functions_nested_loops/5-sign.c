#include "main.h"

/**
 * print_sign - Function checks for the int number sign
 *
 * @n: The integer number will be checked
 *
 * Return: -1 if negative number and 0 if the input=0 and 1 if positive number
 *
*/

int print_sign(int n)
{
	if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
