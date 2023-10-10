#include "main.h"

/**
 * print_alphabet - A c Program prints all alphabet using _putchar function
 *
 * Return: void
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
