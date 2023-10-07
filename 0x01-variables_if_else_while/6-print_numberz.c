#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints single digit numbers of base 10 as chars
 *
 * Return: always 0 when success
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
