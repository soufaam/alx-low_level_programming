#include "lists.h"
#include <stdio.h>

/**
* reverse_listint - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *tmp = *head;

	while (*head)
	{
		*head = (*head)->next;
		tmp->next = previous;
		previous = tmp;
		tmp = *head;
	}
	*head = previous;
	return (*head);
}
