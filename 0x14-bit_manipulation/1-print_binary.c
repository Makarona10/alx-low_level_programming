#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number that will be converted
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned int bit, prntd = 0;

	bit = sizeof(n) * 8;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			prntd++;
		}
		else if (prntd)
			_putchar('0');
	}
	if (prntd)
		_putchar('0');
}
