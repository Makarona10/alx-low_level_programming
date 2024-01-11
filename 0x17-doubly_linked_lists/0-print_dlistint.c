#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 *
 * @h: A pointer to the list's head
 *
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t ret;

	ret = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ret++;
	}
	return (ret);
}
