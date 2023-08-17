#include "lists.h"


/**
 * print_dlistint - check the code
 * @h: Head
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
