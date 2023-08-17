#include "lists.h"


/**
 * free_dlistint - check the code
 * @head: Head
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (!head)
		return;
	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
