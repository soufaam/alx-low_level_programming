#include "hash_tables.h"

/**
* hash_table_print -  function
* Description: 'the program's description key_index
* @ht: hash table
*  Return: Always 0 (Success)
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i, flag = 0;
	hash_node_t *tmp = NULL, *old = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (i > 0 && flag)
			flag = 1;
			free(tmp->key);
			free(tmp->value);
			old = tmp;
			tmp = tmp->next;
			free(old);
		}
	}
	free(ht->array);
	free(ht);
}
