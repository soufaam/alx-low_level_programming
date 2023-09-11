#include "hash_tables.h"

/**
* _strlen -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int _strlen(char *s)
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
* _strdup -  Entrypoint
* Description: 'the program's description _strdup
* @str : 1 param
*  Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str)) + 1);
	if (s)
	{
		for (; i < _strlen(str); i++)
		{
			*(s + i) = *(str + i);
		}
	return (s);
	}
	free(s);
	return (NULL);
}

/**
* hash_table_set -  function
* Description: 'the program's description key_index
* @ht: hash table
* @key: 1 param
* @value: 2 param
*  Return: Always 0 (Success)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ht_node = NULL;
	unsigned long int i;

	if (*key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ht_node = malloc(sizeof(hash_node_t));
	if (!ht_node)
		return (0);
	ht_node->key = _strdup((char *)key);
	ht_node->value = _strdup((char *)value);
	ht_node->next = NULL;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			ht_node->next = ht->array[i];
		else
			ht->array[index] = ht_node;
	}
	return (1);
}
