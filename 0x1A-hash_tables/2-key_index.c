#include "hash_tables.h"


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *tab = NULL;
	int index;

	index = hash_djb2(key);
	tab = malloc(sizeof(hash_table_t) * size);
	if (tab)
	{
		tab->array = malloc(sizeof(hash_node_t *) * size);
		if (tab->array)
		{
			tab->array->key = key;
			return (hash_djb2(key));
		}
	}
}
