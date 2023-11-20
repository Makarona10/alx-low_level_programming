#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: a pointer to a pointer pointing to the head of a list
 *
 * @n: The number will be assigned to a new node
 *
 * Return: The address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (head == NULL || n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (!*head)
		n_node->next = NULL;
	else
		n_node->next = *head;

	*head = n_node;

	return (n_node);
}
