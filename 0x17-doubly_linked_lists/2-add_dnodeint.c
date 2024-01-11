#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: A pointer to a pointer to the head
 *
 * @n: The new node's data
 *
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint));
	if (!n_node || !head)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	(*head)->prev = n_node;
	(*head) = n_node;

	return (n_node);
}
