#include "lists.h"
#include <string.h>

/**
* get_len - gets the length of a string
*
* @s: The string input to calculate the length of
*
* Return: The length of a string
*/

int get_len(const char *s)
{
	int len = 0;
	int x = 0;

	if (s != NULL)
	{
		while (s[x++] != '\0')
			len++;
	}
	return (len);
}

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
		n_node->str = strdup(str);
		if (n_node->str == NULL)
		{
			free(n_node);
			return (NULL);
		}
		n_node->len = get_len(n_node->str);
	}

	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
