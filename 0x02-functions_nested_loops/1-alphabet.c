#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_alphabet  - check the code
* Description: 'this program print alphabet from a to z'
*  Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
