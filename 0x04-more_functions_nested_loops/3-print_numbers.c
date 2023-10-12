#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: void
*/

void print_numbers(void)
{
	for (int x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
}
