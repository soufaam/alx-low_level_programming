#include "lists.h"


/**
 * get_dnodeint_at_index - check the code
 * @head: Head
 * @index: number
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	size_t i = 0;

	if (head == NULL)
		return (NULL);
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
