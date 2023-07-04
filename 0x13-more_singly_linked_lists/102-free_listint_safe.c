#include "lists.h"
#include <stdio.h>

/**
* free_listint_safe - ENTRYPOINT
* @h : constant
* Return: 0 success or uint
*/

size_t free_listint_safe(listint_t **h)
{

	listint_t *tmp = NULL, *current = NULL;
	size_t i = 0;

	if (!h)
		return (i);
	if (!*h)
	{
		h = NULL;
		return (i);
	}
	while (*h)
	{
		current = *h;
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		if (tmp <= current)
			break;
		i++;
	}
	if (tmp)
		free(tmp);
	if (current)
		free(current);
	*h = NULL;
	return (i);
}
