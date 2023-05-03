#include "lists.h"
#include <stdio.h>

/**
* print_listin_safe - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *store = head, *tmp = NULL;

	if (head == NULL)
	{
		exit(98);
	}
	while (store != NULL)
	{
		printf("[%p] %d\n", (void *)store, store->n);
		tmp = store;
		store = store->next ;
		if (tmp <= store)
		{
			printf("[%p] %d\n", (void *)store, store->n);
			head = head->next;
			exit(98);
		}
		i++;
	}
	return (i);
}
