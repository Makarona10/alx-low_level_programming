#include "main.h"

/**
 * print_triangle - function that prints an integer
 *
 * @x: The integer number will be printed
 *
 * Return: void
*/


void print_number(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = x * -1;
	}

	if(x <= 9 && x >= 0)
	{
		_putchar(x + '0');
	}
	else if(x >= 10 && x <= 99)
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 100 && x <= 999)
	{
		_putchar((x / 100) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 1000 && x <= 9999)
	{
		_putchar((x / 1000) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 10000 && x <= 99999)
	{
		_putchar((x / 10000) + '0');
		_putchar((x / 1000 % 10) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 100000 && x <= 999999)
	{
		_putchar((x / 100000) + '0');
		_putchar((x / 10000 % 10) + '0');
		_putchar((x / 1000 % 10) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 1000000 && x <= 9999999)
	{
		_putchar((x / 1000000) + '0');
		_putchar((x / 100000 % 10) + '0');
		_putchar((x / 10000 % 10) + '0');
		_putchar((x / 1000 % 10) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 10000000 && x <= 99999999)
	{
		_putchar((x / 10000000) + '0');
		_putchar((x / 1000000 % 10) + '0');
		_putchar((x / 100000 % 10) + '0');
		_putchar((x / 10000 % 10) + '0');
		_putchar((x / 1000 % 10) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 100000000 && x <= 999999999)
	{
		_putchar((x / 100000000) + '0');
		_putchar((x / 10000000 % 10) + '0');
		_putchar((x / 1000000 % 10) + '0');
		_putchar((x / 100000 % 10) + '0');
		_putchar((x / 10000 % 10) + '0');
		_putchar((x / 1000 % 10) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if(x >= 1000000000 && x <= 9999999999)
	{
		_putchar((x / 1000000000) + '0');
		_putchar((x / 100000000 % 10) + '0');
		_putchar((x / 10000000 % 10) + '0');
		_putchar((x / 1000000 % 10) + '0');
		_putchar((x / 100000 % 10) + '0');
		_putchar((x / 10000 % 10) + '0');
		_putchar((x / 1000 % 10) + '0');
		_putchar((x / 100 % 10) + '0');
		_putchar((x / 10 % 10) + '0');
		_putchar((x % 10) + '0');
	}

}
