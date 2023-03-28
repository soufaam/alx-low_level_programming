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
	int size = 0, tmp, r, q, div = 1, i, min = 0;

	tmp = n;
	if (tmp == 0)
	{
		_putchar('0');
		return;
	}
	tmp /= 10;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		size = size + 1;
	}
	for (i = 0; i < size; i++)
		div *= 10;
	if (n == -2147483648)
	{
		n = (n + 1) * -1;
		min = 1;
	}
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
	_putchar(r + min + '0');
}
