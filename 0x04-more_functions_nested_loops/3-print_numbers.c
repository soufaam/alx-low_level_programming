#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_numbers - Entrypoint
* Description: 'the program's description print_numbers
*  Return: Always 0 (Success)
*/

void print_numbers(void)
{
	char ch = '0';

	for (; ch <= '9'; ch++)
		_putchar(ch);

	putchar ('\n');
}
