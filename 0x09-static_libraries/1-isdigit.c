#include "main.h"

/**
 * _isdigit - Checks if the input is a digit
 *
 * @c: the input will be checked
 *
 * Return: 1 when true, 0 when false
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
