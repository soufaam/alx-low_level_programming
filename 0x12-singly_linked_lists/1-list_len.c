#include "lists.h"
#include <stdio.h>

/**
* list_len - ENTRYPOINT
* @h : constant
* Return: 0 success or uint
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
