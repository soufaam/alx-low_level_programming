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
	char num, nbr;

	for (nbr = 0; nbr < 10; nbr++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		putchar ('\n');
	}
}
