#include "lists.h"

/**
 * free_listint - frees a list_t list
 *
 * @head: a pointer points to list's head
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current, *nxt;

	if (head == NULL)
		return;

	current = head;

	while (current)
	{
		nxt = current->next;
		free(current->n);
		free(current);
		current = nxt;
	}
}
