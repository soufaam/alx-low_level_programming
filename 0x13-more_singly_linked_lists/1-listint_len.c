#include "lists.h"
#include <stdio.h>

/**
* listint_len - ENTRYPOINT
* @h : constant
* Return: 0 success or uint
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
