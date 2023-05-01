#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - ENTRYPOINT
* @head : constant
* @n: int
* Return: 0 success or uint
*/

listint_t *add_nodeint (listint_t **head, const int n)
{

	listint_t *node = malloc(sizeof(listint_t));

	if (node)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	if (*head)
		return (*head);
	return (NULL);
}
