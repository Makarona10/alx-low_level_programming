#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints alphabet
 *
 * Return: always 0 when success
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
