#include "lists.h"
#include <stdio.h>

/**
* pop_listint - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

int  pop_listint(listint_t **head)
{

	listint_t *node = *head;
	int n;

	if (!node)
		return (0);
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
