#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  jack_bauer - check the code
* Description: 'this program  jack_bauer '
*  Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int h, k, o, m;

	for (h = 0; h < 3; h++)
		for (k = 0; k < 10; k++)
		{
			if (h == 2 && k > 3)
				break;
			for (o = 0; o < 6; o++)
				for (m = 0; m < 10; m++)
				{
					_putchar(h + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(o + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
		}
}
