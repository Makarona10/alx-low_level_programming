#include "lists.h"

/**
 * print_listint - prints the elements of a list
 *
 * @h: a pointer to the head of a list
 *
 * Return: The length of a list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
