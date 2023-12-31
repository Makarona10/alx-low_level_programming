#include "lists.h"

/**
 * reverse_listint -reverses a linked list
 *
 * @head: a pointer to a pointer pointing to first node
 *
 * Return: Adress of new head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL, *nnxt = NULL;

	if (!head || !(*head))
		return (NULL);

	if (!(*head)->next)
		return (*head);

	if (!(*head)->next->next)
	{
		(*head)->next->next = (*head);
		(*head) = (*head)->next;
		(*head)->next->next = NULL;
		return (*head);
	}

	nxt = (*head)->next;
	nnxt = (*head)->next->next;
	(*head)->next = NULL;

	while (nnxt)
	{
		nxt->next = *head;
		nxt = nnxt;
		nnxt = nnxt->next;
	}
	nxt->next = *head;
	*head = nxt;

	return (*head);
}
