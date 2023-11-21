#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to a pointer pointing to first node
 *
 * @idx: the index of the list where the new node should be added
 *
 * @n: data of new node
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *node;
	unsigned int x = 0;

	node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	current = *head;
	node->n = n;
	node->next = NULL;

	while (current != NULL)
	{
		if (idx == 0)
		{
			node->next = (*head);
			*head = node;
			return (node);
		}
		if (x == (idx - 1))
		{
			node->next = current->next;
			current->next = node;
			return (node);
		}
		current = current->next;
		x++;
	}
	free(node);

	return (NULL);
}
