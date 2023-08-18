#include "lists.h"


/**
 * delete_dnodeint_at_index - check the code
 * @head: Head
 * @index: index
 * Return: Always EXIT_SUCCESS.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	size_t i = 0;

	if (!tmp)
		return (-1);
	while (tmp)
	{
		if (index == 0)
		{
			if (tmp->next)
				tmp->next->prev = NULL;
			free(tmp);
			*head = tmp->next;
			return (1);
		}
		else if (i == index && tmp->next)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		else if (i == index && !tmp->next)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
