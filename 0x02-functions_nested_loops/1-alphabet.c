#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: 'the program's description
*  Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
