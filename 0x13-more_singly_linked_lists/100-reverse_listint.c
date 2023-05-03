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
	listint_t *next = NULL;

	while (tmp)
	{
		next = tmp->next;
		tmp->next = previous;
		previous = tmp;
		tmp = next;
	}
	*head = previous;
	return (*head);
}
