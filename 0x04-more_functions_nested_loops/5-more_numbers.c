#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* more_numbers -  Entrypoint
* Description: 'the program's description more__numbers
*  Return: Always 0 (Success)
*/

void more_numbers(void)
{
	char num, nbr, q, r;

	for (nbr = 0; nbr < 10; nbr++)
	{
		for (num = 0; num <= 14; num++)
		{
			r = num % 10;
			q = num / 10;
			if (q != 0)
			{
				_putchar(q + '0');
			}
			_putchar(r + '0');
		}
		_putchar('\n');
	}
}
