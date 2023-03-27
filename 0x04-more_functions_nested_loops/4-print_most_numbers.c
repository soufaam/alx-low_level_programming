#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_most_numbers -  Entrypoint
* Description: 'the program's description print_most_numbers
*  Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	char ch = '0';

	for (; ch <= '9'; ch++)
		if (ch != '2' && ch != '4')
			_putchar(ch);

	putchar ('\n');
}
