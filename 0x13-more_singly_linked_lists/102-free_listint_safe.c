#include "lists.h"
#include <stdio.h>


/**
* add_nodelong2 - ENTRYPOINT
* @head : constant
* @n: int
* Return: 0 success or uint
*/

store_addr *add_nodelong2(store_addr **head, const unsigned long n)
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
* get_nodelong2- ENTRYPOINT
* @head : listint_t type
* @value: int unsgned
* Return: 0 success or uint
*/
int get_nodelong2(store_addr *head, unsigned long value)
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
* free_listlong2 - ENTRYPOINT
* @head : constant
* Return: 0 success or uint
*/

void free_listlong2(store_addr *head)
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
* free_listint_safe - ENTRYPOINT
* @h : constant
* Return: 0 success or uint
*/

size_t free_listint_safe(listint_t **h)
{

	listint_t *tmp = NULL, *current = NULL;
	store_addr *hd = NULL;
	size_t i = 0, true = 0;

	if (!h)
		return (i);
	if (!*h)
	{
		h = NULL;
		return (i);
	}
	while (*h)
	{
		current = *h;
		add_nodelong2(&hd, (unsigned long)current);
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		true = get_nodelong2(hd, (unsigned long)tmp);
		if (true)
		{
			i++;
			break;
		}
		i++;
	}
	if (tmp)
	{
		i++;
		free(tmp);
	}
	free_listlong2(hd);
	*h = NULL;
	h = NULL;
	return (i);
}
