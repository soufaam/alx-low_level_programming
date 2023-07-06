#include "main.h"

/**
* get_bit - ENTRYPOINT
* @n: first parameter
* @index: seconde parameter
* Return: 0 success or uint
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nbr;

	nbr = (n >> index) & 1;
	return (nbr);
}
