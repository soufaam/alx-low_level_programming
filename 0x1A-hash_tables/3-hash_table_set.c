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
	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (s)
	{
		for (; i < _strlen(str); i++)
		{
			*(s + i) = *(str + i);
		}
		s[i] = '\0';
	return (s);
	}
	free(s);
	return (NULL);
}

/**
* _strcmp -  Entrypoint
* Description: 'the program's description _strcmp
* @s1 : 1 param
* @s2 : 2 param
*  Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int result, i = 0;

	result = *(s1 + i) - *(s2 + i);
	while (*(s1 + i) != '\0' && (*(s1 + i) - *(s2 + i)) == 0)
	{
		i++;
		result = *(s1 + i) - *(s2 + i);
	}
	return (result);
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
	hash_node_t *ht_node = NULL, *tmp = NULL;
	char *dkey = (char *)key, *dval = (char *)value;
	unsigned long int i;

	if (*key == '\0' || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (0);
	ht_node = malloc(sizeof(hash_node_t));
	if (!ht_node)
		return (0);
	ht_node->key = _strdup((dkey));
	ht_node->value = _strdup(dval);
	ht_node->next = NULL;
	for (i = 0; i < ht->size; i++)
		if (i == index && ht->array[index])
		{
			if (_strcmp(ht->array[index]->key, dkey))
			{
				ht_node->next = ht->array[index];
				ht->array[index] = ht_node;
				return (1);
			}
			else
			{
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				tmp = ht->array[index];
				ht->array[index] = ht_node;
				free(tmp);
				return (1);
			}
		}
	ht->array[index] = ht_node;
	return (1);
}
