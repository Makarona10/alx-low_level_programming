#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 *
 * @head: a pointer the pointer that points to list's head
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *nxt;

	if (head == NULL)
		return;

	current = *head;

	while (current)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
	head = NULL;
}
