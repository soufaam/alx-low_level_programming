#include "lists.h"
#include <stdio.h>

/**
* _strlen -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int _strlen(const char *s)
{
	int t = 0, len = 0;

	while (*(s + t) != '\0')
	{
		len = len + 1;
		t++;
	}
	return (len);
}

/**
* add_node_end - ENTRYPOINT
* @head : constant
* @str: char
* Return: 0 success or uint
*/

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *node = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (node)
	{
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = NULL;
	}
	if (!*head)
	{
		*head = node;
		return (*head);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
		return (*head);
}
