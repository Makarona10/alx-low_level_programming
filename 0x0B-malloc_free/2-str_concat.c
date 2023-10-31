#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: The first string to concat
 *
 * @s2: The second string to concat
 *
 * Return: A pointer to allocated memory cantains the concatenated string
 */


char *str_concat(char *s1, char *s2)
{
	int x, y, len1 = 0, len2 = 0;
	char *ch;

	while (*s1++ != '\0')
		len1++;

	s1 -= (len1 + 1);

	while (*s2++ != '\0')
		len2++;

	s2 -= (len2 + 1);

	ch = malloc((len1 + len2 + 1));

	if (ch == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		ch[x] = s1[x];

	for (y = 0; y <= len2; y++)
		ch[x++] = s2[y];

	return (ch);
}
