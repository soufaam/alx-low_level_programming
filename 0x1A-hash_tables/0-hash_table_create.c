#include "hash_tables.h"

/**
* hash_table_create -  function
* Description: 'the program's description _strlen
* @size: 1 param
*  Return: Always 0 (Success)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	 unsigned long i;

	tab = malloc(sizeof(hash_table_t));
	if (!tab)
		return (NULL);
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * tab->size);
	if (!tab->array)
		return (NULL);
	for (i = 0; i < tab->size; i++)
	{
		tab->array[i] = NULL;
	}
	return (tab);
}
