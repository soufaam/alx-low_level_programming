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

	tab = malloc(sizeof(hash_node_t)*size);
	if (!tab)
		return (NULL);
	tab->size = size;
	return tab;
}