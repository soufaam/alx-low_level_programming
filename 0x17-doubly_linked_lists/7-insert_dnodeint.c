#include "lists.h"


/**
 * insert_dnodeint_at_index - check the code
 * @h: Head
 * @idx: index
 * @n: number
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *store =NULL;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	size_t i = 0;


	if (!node)
		return (NULL);
	if (!tmp && idx == 0)
		return (add_dnodeint(h, n));
	else if (!tmp)
		return (NULL);
	while (tmp)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else if (i == idx)
		{
			node->n = n;
			node->next = tmp;
			node->prev = tmp->prev;
			tmp->prev->next = node;
			tmp->prev = node;
			return (node);
		}
		store = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
	{
		add_dnodeint_end(h, n);
		return (store->next);
	}
		
	return (NULL);
}
