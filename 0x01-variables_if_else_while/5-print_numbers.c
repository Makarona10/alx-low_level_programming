#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: C Program prints all single digit numbers of base 10
 *
 * Return: always 0 when success
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
