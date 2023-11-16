#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: a pointer the pointer that points to list's head
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *current, *nxt;

	if (head == NULL)
		return;

	current = head;

	while (current)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}

