#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 *
 * @head: a pointer to a pointer pointing to the head of a list
 *
 * @n: The number will be assigned to a new node
 *
 * Return: The address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *current;

	current = *head;

	n_node = malloc(sizeof(listint_t));

	if (head == NULL || n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;

		current->next = n_node;
	}
	else
		*head = n_node;

	return (n_node);
}
