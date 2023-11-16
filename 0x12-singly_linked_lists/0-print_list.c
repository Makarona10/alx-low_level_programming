#include "lists.h"

/**
* get_len - gets the length of a string
*
* @s: The string input to calculate the length of
*
* Return: The length of a string
*/

int get_len(char *s)
{
	int len = 0;
	int x = 0;

	if (s != NULL)
	{
		while (s[x++] != '\0')
			len++;
	}
	return (len);
}

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: The header of a list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t ret_value;

	ret_value = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", get_len(h->str), h->str);
		}
		h = h->next;
		ret_value++;
	}

	return (ret_value);
}
