#include "main.h"


/**
* set_bit - ENTRYPOINT
* @n: first parameter
* @index: seconde parameter
* Return: 0 success or uint
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
