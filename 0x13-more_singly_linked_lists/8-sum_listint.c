#include "lists.h"

/**
 * sum_listint -  calculates the sum of all the
 * data (n) of a listint_t linked list
 *
 * @head: a pointer to list's head
 *
 * Return: sum of all the data (n)
*/

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;

		current = current->next;
	}

	return (sum);
}
