#include "lists.h"
#include <stdio.h>

/**
* print_list - ENTRYPOINT
* @h : constant
* Return: 0 success or uint
*/

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	char *st;

	st = strdup(str);
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
