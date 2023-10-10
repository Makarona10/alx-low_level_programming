#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints alphabet 10 times
 *
 * Return: always 0 when success
*/

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int x;
	char letter;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
