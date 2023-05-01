#include "lists.h"
#include <stdio.h>

/**
* free_listint - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

void free_listint(listint_t *head)
{

	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
	if (tmp)
		free(tmp);
}
