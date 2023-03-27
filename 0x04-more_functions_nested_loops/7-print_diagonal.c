#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_diagonal -  Entrypoint
* Description: 'the program's description print_diagonal
* @n : 1 param
*  Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int nbr, num;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (num = 0; num < n; num++)
	{
		for (nbr = 0; nbr < num; nbr++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

}
