#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: a pointer the pointer that points to list's head
 *
 * @str: String will be copied to node's data
 *
 * Return: New node adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *current;

	current = *head;

	n_node = malloc(sizeof(list_t));

	if (head == NULL || n_node == NULL)
		return (NULL);

	if (str)
	{
		n_node->str = strdup(str);
		if (n_node->str == NULL)
		{
			free(n_node);
			return (NULL);
		}
		n_node->len = get_lenc(n_node->str);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = n_node;

	return (n_node);

}
