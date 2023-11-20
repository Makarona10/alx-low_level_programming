#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index of a linked list
 *
 * @head: a pointer to a pointer pointing to first node
 *
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if succeeded, or -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int x = 0;

	if (!head)
		return (-1);

	current = *head;

	while (current != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			current->next = NULL;
			free(current);
			return (1);
		}
		if (x == (index - 1))
		{
			current->next = current->next->next;
			current = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		x++;
	}

	return (-1);
}
