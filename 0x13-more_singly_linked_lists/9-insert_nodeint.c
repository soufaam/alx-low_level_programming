#include "lists.h"
#include <stdio.h>

/**
* insert_nodeint_at_index - ENTRYPOINT
* @head : first param
* @idx : 2 parama
* @n : int
* Return: 0 success or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *node = malloc(sizeof(listint_t)), *ntmp = *head;
	unsigned int i = 0, insert = 0;

	if (node)
		node->n = n;
	else
		return (NULL);
	if (!ntmp || !head)
	{
		*head = node;
		return (*head);
	}
	while (ntmp)
	{
		if (i == idx - 1 && idx != 0)
		{
			node->next = ntmp->next;
			ntmp->next = node;
			insert = 1;
			break;
		}
		else if (idx == 0)
		{
			node->next = ntmp;
			*head = node;
			insert = 1;
			break;
		}
		ntmp = ntmp->next;
		i++;
	}
	if (insert)
		return (*head);
	return (NULL);
}
