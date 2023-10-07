#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints alphabet in lower case reversely
 *
 * Return: always 0 when success
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
