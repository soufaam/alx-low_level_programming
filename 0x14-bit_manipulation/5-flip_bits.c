#include "main.h"


/**
* flip_bits - ENTRYPOINT
* @n: first parameter
* @m: seconde parameter
* Return: 0 success or uint
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		xor_result &= (xor_result - 1);
		count++;
	}
	return (count);
}
