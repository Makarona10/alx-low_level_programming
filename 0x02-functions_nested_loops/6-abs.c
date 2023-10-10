#include "main.h"

/**
 * _abs - Function calculates the absolute number of the input
 *
 * @x: The integer number will be checked
 *
 * Return:  always return 0
 *
*/


int _abs(int x)
{
	if (x <= 0)
		printf("%d",(x * -1));
	else
		printf("%d", x);
}
