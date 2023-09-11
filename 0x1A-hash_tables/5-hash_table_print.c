#include "hash_tables.h"

/**
* hash_table_print -  function
* Description: 'the program's description key_index
* @ht: hash table
*  Return: Always 0 (Success)
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag = 0;
	hash_node_t *tmp = NULL;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (i > 0 && flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
