#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: a pointer the pointer that points to list's head
 *
 * @str: String will be copied to node's data
 *
 * Return: New node adress
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (head == NULL || n_node == NULL)
		return (NULL);

	if (str)
	{
		n_node->str = (str);
		n_node->len = get_len(str);
	}

	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
