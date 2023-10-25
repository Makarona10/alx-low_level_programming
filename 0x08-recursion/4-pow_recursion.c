#include "main.h"

/**
 * _pow_recursion - returns The value of x raised to the power of y
 *
 * @x: The base number
 *
 * @y: The power number
 *
 * Return: The value of x to power of y
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (-1);
	
}
