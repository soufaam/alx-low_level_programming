#include "hash_tables.h"

/**
* hash_table_get -  function
* Description: 'the program's description key_index
* @ht: hash table
* @key: 1 param
*  Return: Always 0 (Success)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;
	unsigned long int i;

	if (*key == '\0' || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = 0; i < ht->size; i++)
		if (i == index && ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				if (!_strcmp(tmp->key, (char *)key))
					return (tmp->value);
				tmp = tmp->next;
			}
		}
	return (NULL);
}
