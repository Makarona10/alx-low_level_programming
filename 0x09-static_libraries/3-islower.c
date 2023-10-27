#include "main.h"

/**
 * _islower - A function checks if the letter is lowercase
 *
 * @c: The letter that the function will check on
 *
 * Return: always 1 when lowercase and 0 if upper
*/

int _islower(int c)
{
	if (c < 123 && c > 96)

		return (1);

	else
		return (0);

}
