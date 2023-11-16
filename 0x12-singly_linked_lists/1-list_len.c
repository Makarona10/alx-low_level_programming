#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: The head of a list
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
