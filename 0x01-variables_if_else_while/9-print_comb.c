#include <stdio.h>

/**
 * main - Entry point for the prog
 *
 * Description: Prog prints all possible combinations of single-digit numbers
 *
 * Return: always 0 when success
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(' ');
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
