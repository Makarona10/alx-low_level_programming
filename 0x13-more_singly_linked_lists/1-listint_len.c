#include "lists.h"

/**
 * listint_len - calculates the length of a linked list
 *
 * @h: a pointer to the head of a list
 *
 * Return: The length of a list
 */

size_t listint_len(const listint_t *h)
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
