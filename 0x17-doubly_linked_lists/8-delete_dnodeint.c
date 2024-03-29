#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 *
 * @head: double pointer to the linked list
 *
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t i;

	if (!head || !(*head))
		return (-1);
	current = *head;
	if (!index)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;

		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!current->next)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
