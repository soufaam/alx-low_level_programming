#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index- ENTRYPOINT
* @head : listint_t type
* @index: int unsgned
* Return: 0 success or uint
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *node = head;

	if (!node)
		return (NULL);
	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
