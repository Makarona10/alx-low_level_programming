#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: The header of a list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *current;
	size_t ret_value;

	current = h->next;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] (nil)\n", current->len);
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		ret_value = current->len;
	}

	return (ret_value);
}
