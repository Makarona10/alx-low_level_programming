#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints all the numbers of base 16
 *
 * Return: always 0 when success
*/
int main(void)
{
	char c;
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
