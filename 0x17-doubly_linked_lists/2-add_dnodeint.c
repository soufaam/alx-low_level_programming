#include "lists.h"


/**
 * add_dnodeint - check the code
 * @head: Head
 * @n: number
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	if (tmp == NULL)
	{
		node->n = n;
		node->next = tmp;
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	node->n = n;
	node->next = tmp;
	node->prev = NULL;
	tmp->prev = node;
	*head = node;
	return (*head);
}
