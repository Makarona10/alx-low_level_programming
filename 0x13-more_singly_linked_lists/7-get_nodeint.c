#include "lists.h"

/**
 * get_nodeint_at_index -  gets the nth node of a linked list
 *
 * @head: a pointer to list's head
 *
 * @index: index of the node will be returned
 *
 * Return: the nth node of a linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int n = 0;

	if (!head)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		if (n == index)
			return (current);

		current = current->next;
		n++;
	}

	return (NULL);
}
