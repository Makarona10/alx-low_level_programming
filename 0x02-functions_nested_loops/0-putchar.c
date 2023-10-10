#include "main.h"

/**
 * main - entry point for the program
 *
 * Description: Program prints "_putchar"
 *
 * Return: Always 0 when success
*/

int main(void)
{
	char word[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++){
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
