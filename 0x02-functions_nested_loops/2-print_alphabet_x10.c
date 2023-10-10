#include "main.h"

/**
 * print_alphabet_x10 - A function prints alphabet 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int x;
	char letter;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
