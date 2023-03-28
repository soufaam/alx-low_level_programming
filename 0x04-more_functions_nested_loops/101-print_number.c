#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*print_number -  Entrypoint
*Description: 'the program's description print_number
*@n : param 1
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	int size = 0, r, q, div = 1, i, tmp;

	tmp = n;
	if (tmp == 0)
	{
		_putchar('0');
		return;
	}
	while (tmp != 0)
	{
		tmp = tmp / 10;
		size = size + 1;
	}
	for (i = 1; i < size; i++)
		div *= 10; 
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (div >= 10)
	{
		q = n / div;
		n = n - (q * div);
		_putchar(q + '0');
		div /= 10;
	}
	r = n % 10;
	_putchar(r + '0');
}
