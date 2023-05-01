#include "lists.h"
#include <stdio.h>

/**
* print_listint - ENTRYPOINT
* @h : constant
* Return: 0 success or uint
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
