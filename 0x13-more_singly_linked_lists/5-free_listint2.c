#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

void free_listint2(listint_t **head)
{

	listint_t *tmp;

	if (!head)
		return;
	if (!*head)
	{
		head = NULL;
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	if (tmp)
		free(tmp);
	head = NULL;
}
