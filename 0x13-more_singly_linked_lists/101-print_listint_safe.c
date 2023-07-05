#include "lists.h"
#include <stdio.h>


/**
* add_nodelong - ENTRYPOINT
* @head : constant
* @n: int
* Return: 0 success or uint
*/

store_addr *add_nodelong (store_addr **head, const unsigned long n)
{

	store_addr *node = malloc(sizeof(store_addr));

	if (node)
	{
		node->p = n;
		node->next = *head;
		*head = node;
	}
	if (*head)
		return (*head);
	return (NULL);
}

/**
* get_nodelong- ENTRYPOINT
* @head : listint_t type
* @value: int unsgned
* Return: 0 success or uint
*/
int get_nodelong(store_addr *head, unsigned long value)
{
	store_addr *node = head;

	if (!node)
	{
		return (0);
	}
	while (node)
	{
		if (node->p == value)
		{
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
* free_listlong - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

void free_listlong(store_addr *head)
{

	store_addr *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	if (tmp)
		free(tmp);
}
/**
* print_listint_safe - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/


size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, true = 0;
	const listint_t *store = head;
	store_addr *hd = NULL;

	if (head == NULL)
	{
		return (i);
	}
	while (store != NULL)
	{
		printf("[%p] %d\n", (void *)&store->n, store->n);
		add_nodelong(&hd, (unsigned long)store);
		store = store->next;
		true = get_nodelong(hd, (unsigned long)store);
		if (true)
		{
			printf("-> [%p] %d\n", (void *)&store->n, store->n);
			store = store->next;
			i++;
			break;
		}
		i++;
	}
	free_listlong(hd);
	return (i);
}
