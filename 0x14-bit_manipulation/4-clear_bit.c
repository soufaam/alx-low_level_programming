#include "main.h"


/**
* clear_bit - ENTRYPOINT
* @n: first parameter
* @index: seconde parameter
* Return: 0 success or uint
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
