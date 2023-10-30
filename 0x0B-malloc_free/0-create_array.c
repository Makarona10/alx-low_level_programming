#include <stdlib.h>
#include "main.h"

/**
 * _to_hexa - Transform the input to hexa deximal
 *
 * @dec: The number will be transformed
 *
 * Return: void
*/

void _to_hexa(int dec)
{
	char hex[10];
	int remain;
	int x = 0;

	if (dec == 0)
	{
		putchar('0');
		putchar('0');
	}
	else if (dec < 9)
	{
		_putchar('0');
		_putchar('0' + dec);
	}
	else
	{
	while (dec > 9)
	{
		remain = dec % 16;

		if (remain > 9)
			hex[x] = 'A' + (remain - 10);

		else
			hex[x] = ('0' + remain);

		x++;
		dec = (dec / 16);
	}
	}
	while (x--)
		_putchar(hex[x]);

		_putchar(' ');
}

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: The length of the array
 *
 * @c: The char that the array will be initialized with
 *
 * Return: A pointer to the array or NULL of it fails, and NULL if size = 0.
*/

char *create_array(unsigned int size, char c)
{
	char *ch = (char *)malloc(size);
	char cc = c;
	unsigned int x;

	ch = &cc;

	if (size == 0 || ch == 0)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		_putchar('0');
		_putchar('x');
		_to_hexa(c);
	}


	return (ch);
}
