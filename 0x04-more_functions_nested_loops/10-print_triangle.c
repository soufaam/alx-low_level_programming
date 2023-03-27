#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_triangle-  Entrypoint
* Description: 'the program's description print_triangle
* @size : 1 param
*  Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int l, n, m;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (n = 0; n < size; n++)
	{
		for (m = size - n - 1; m > 0; m--)
			_putchar(' ');
		for (l = 0; l <= n; l++)
			_putchar('#');
		_putchar('\n');
	}

}
