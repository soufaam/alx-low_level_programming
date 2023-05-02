#include "lists.h"
#include <stdio.h>

/**
* sum_listint - ENTRYPOINT
* @head : 1-param
* Return: 0 success or uint
*/
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
