#include "lists.h"
#include <stdio.h>

/**
* delete_nodeint - ENTRYPOINT
* @head : first param
* @index: 2 parama
* Return: 0 success or uint
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *ntmp = *head, *node;
	unsigned int i = 0, delete = -1;

	if (!ntmp)
	{
		return (1);
	}
	while (ntmp)
	{
		if (i == index - 1 && index != 0 && ntmp->next)
		{
			node = ntmp->next;
			ntmp->next = ntmp->next->next;
			free(node);
			delete = 1;
			break;
		}
		else if (index == 0)
		{
			node = *head;
			*head = ntmp->next;
			delete = 1;
			free(node);
			break;
		}
		ntmp = ntmp->next;
		i++;
	}
	return (delete);
}
