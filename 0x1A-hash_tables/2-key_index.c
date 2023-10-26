#include "hash_tables.h"

/**
* key_index -  function
* Description: 'the program's description key_index
* @key: 1 param
* @size: 2 param
*  Return: Always 0 (Success)
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = hash_djb2(key);

	return (index % size);
}
