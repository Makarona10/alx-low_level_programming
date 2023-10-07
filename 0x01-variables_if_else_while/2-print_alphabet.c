#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints the alphabet
 *
 * Return: always 0 when success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
