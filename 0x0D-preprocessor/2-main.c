#include <stdio.h>

/**
 * main - A program prints the name of the file it was compiled from
 *
 * Return: always zero
*/

int main(void)
{
	int x = 0;
	int bslash = 0;
	char *fname = __FILE__;

	while (fname[x] != '\0')
	{
		if (fname[x] == '\\')
			bslash = x + 1;
		x++;
	}

	while (fname[bslash] != '\0')
	{
		printf("%c", fname[bslash]);
		bslash++;
	}
	return (0);
}
