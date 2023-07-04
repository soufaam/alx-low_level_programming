#include "lists.h"

/**
* find_listint_loop - ENTRYPOINT
* @head : 1 param
* Return: 0 success or uint
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *store = head, *tmp = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	while (store != NULL)
	{
		tmp = store;
		store = store->next;
		if (tmp <= store)
			return (store);
	}
	return (NULL);
}
