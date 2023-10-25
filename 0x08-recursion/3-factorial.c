#include "main.h"

/**
 * factorial - returns a factorial of a given number
 *
 * @n: The number the function should return the factorial of
 *
 * Return: The factorial of a given number
*/

int factorial(int n)
{
	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
