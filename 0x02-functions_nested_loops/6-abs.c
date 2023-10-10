#include "main.h"

/**
 * _abs - Function calculates the absolute number of the input
 *
 * @x: The integer number will be checked
 *
 * Return: the absolute value of the input
 *
*/


int _abs(int x)
{
	if (x <= 0)
		return (x * -1);
	else
		return (x);

	return (0);
}
