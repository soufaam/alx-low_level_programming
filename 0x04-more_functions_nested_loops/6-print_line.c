#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_line -  Entrypoint
* Description: 'the program's description print_line
* @n : 1 param
*  Return: Always 0 (Success)
*/

void print_line(int n)
{
	int nbr;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (nbr = 0; nbr < n; nbr++)
		_putchar('_');
	_putchar('\n');

}
