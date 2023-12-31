#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * @argc: stores the number of command-line arguments passed to the program
 *
 * @argv: array of character pointers that
 * point to the command-line arguments
 *
 * Return: always 0
*/

int main(int argc, char **argv)
{
	int x = 0;

	while (x != argc)
	{
		printf("%s\n", argv[x++]);
	}

	return (0);
}
