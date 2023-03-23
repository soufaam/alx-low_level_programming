#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  time_table - check the code
* Description: 'this program  time_table'
*  Return: Always 0 (Success)
*/

void times_table(void)
{
	int i, j, r, q, p, next_p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = j * i;
			next_p = i * (j + 1);
			r =  p % 10;
			q = p / 10;
			if (q == 0)
			{
				_putchar(r + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				if (next_p / 10 != 0)
					continue;
				_putchar(' ');
			}
			else
			{
				_putchar(q + '0');
				_putchar(r + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}

			_putchar('\n');
	}
}
