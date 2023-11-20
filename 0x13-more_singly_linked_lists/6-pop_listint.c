#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: a pointer the pointer that points to list's head
 *
 * Return: returns the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = tmp;

	return (data);
}
