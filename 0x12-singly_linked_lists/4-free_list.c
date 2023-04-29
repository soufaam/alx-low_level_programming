#include "lists.h"
#include <stdio.h>

/**
* free_list - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

void free_list(list_t *head)
{

	list_t *tmp;

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
