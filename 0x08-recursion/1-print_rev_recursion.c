#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse
 *
 * @s: The string will be printed
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		print_string_reverse(s + 1);
	}
		_putchar(*s);
}
