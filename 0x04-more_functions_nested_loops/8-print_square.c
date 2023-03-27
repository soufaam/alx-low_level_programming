#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_square-  Entrypoint
* Description: 'the program's description print_square
* @n : 1 param
*  Return: Always 0 (Success)
*/

void print_square(int n)
{
	int nbr, num;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (num = 0; num < n; num++)
	{
		for (nbr = 0; nbr < n; nbr++)
			_putchar('#');
		_putchar('\n');
	}

}
