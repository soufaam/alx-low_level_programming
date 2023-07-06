#include "main.h"

/**
* print_binary - ENTRYPOINT
* @number: constant
* Return: 0 success or uint
*/

void print_binary(unsigned int number)
{
	if (number >> 1)
	{
		print_binary(number >> 1);
	}
	_putchar((number & 1) ? '1' : '0');
}
