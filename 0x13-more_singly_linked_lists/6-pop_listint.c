#include "lists.h"
#include <stdio.h>

/**
* poplistint - ENTRYPOINT
* @head : constant
* @n: int
* Return: 0 success or uint
*/

int  pop_listint(listint_t **head)
{

	listint_t *node = malloc(sizeof(listint_t));
	int n;

	if (!*head)
		return (NULL);
	node->n = n;
		node->next = *head;
		*head = node;
	}
	if (*head)
		return (*head);
	return (NULL);
}
