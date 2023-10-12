#include "main.h"

/**
 * _isupper - Checks if the letter is upper case
 *
 * @c: the letter will be checked
 *
 * Return: 1 when true, 0 when false
*/



int _isupper(int c)
{
	if (c >= 65 && c <=90)
		return (1);

	else
		return (0);
}
