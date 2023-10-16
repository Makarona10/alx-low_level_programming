#include "main.h"

/**
 * _strlen - function calculates the length of a string
 *
 * @s: The string will be calculated
 *
 * Return: The length of the string input
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != 0)
		count++;

	return (count);
}
