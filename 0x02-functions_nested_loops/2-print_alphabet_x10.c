#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10  - check the code
* Description: 'this program print alphabet from a to z 10 times'
*  Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char  ch;
	int i = 0;

	for (; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
