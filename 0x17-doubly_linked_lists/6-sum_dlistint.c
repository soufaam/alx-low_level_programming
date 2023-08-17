#include "lists.h"


/**
 * sum_dlistint - check the code
 * @head: Head
 * Return: Always EXIT_SUCCESS.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
