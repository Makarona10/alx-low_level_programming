#include "main.h"

/**
 * puts_half - prints the second half of string
 *
 * @str: string argument will be used in print operation
 *
 * Return: void
*/


void puts_half(char *str)
{
	int x = 0;
	int length = 0;

	while (*(str + length) != 0)
		length++;

	if (length % 2 == 0)
	{
		for (x = (length / 2); x < length; x++)
		_putchar(*(str + x));
	}
	else
	{
		for (x = ((length + 1) / 2); x < length; x++)
		_putchar(*(str + x));
	}
	_putchar('\n');
}
