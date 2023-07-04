#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - ENTRYPOINT
* @head : constant
* @n: int
* Return: 0 success or uint
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node = malloc(sizeof(listint_t)), *tmpnode;

	if (node)
	{
		node->n = n;
		node->next = NULL;
	}
	if (!*head)
	{
		*head = node;
		return (*head);
	}
	tmpnode = *head;
	while (tmpnode->next)
		tmpnode = tmpnode->next;
	tmpnode->next = node;
	return (*head);
}
