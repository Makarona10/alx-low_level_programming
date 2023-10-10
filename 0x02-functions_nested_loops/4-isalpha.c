#include "main.h"

/**
 * _isalpha - A function checks for alphabets
 *
 * @c: the input will be checked if it is alphabet or not
 *
 * Return: always 1 when the input is letter and 0 if else
*/

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (64 < c && c < 91))

		return (1);

	else
		return (0);
}
